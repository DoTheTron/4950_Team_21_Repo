%% Definitions and Constants
SIM_file = 'motor_model_updated_F21_22b';
motor_input = 'motor_model_updated_F21_22b/desiredPosition';
GUI_file = 'GUI_Correct.mlapp';
USB_CAM_NAME = 'USB2.0 PC CAMERA';  %name of USB camera

bg_filename = 'bg_img.png';
state_fname = 'present_game_state.png';
difference_fname = 'difference.png';
color_iso_bin = 'colo_bin.png';
position_param = 0;

cam_width = 640;
cam_height = 480;
color_thresh = 30;

%% main function begins

%launch simulation because it's slow
%motor_model_updated_F21_22b %replace with run statement and see if works
%set_param(SIM_file, 'SimulationCommand', 'start');     %start simulation

% ECE 4950 Fall 2020 Project 2 Demo - Camera Setup
prog_init();
cam = init_cam(webcamlist,USB_CAM_NAME);

% Capturing and Saving BG Image
%Uncomment next two commands to save new background image
%save_new_image(bg_filename,cam);
BG_img = imread(bg_filename);
display_pic(BG_img,'Background Image');

%% stop

% Image filtering
new_state = snapshot(cam);
imwrite(new_state,state_fname);
display_pic(new_state,'Current Game State');

% Foreground Selection
diff = BG_img - new_state;
imwrite(diff,difference_fname);
display_pic(diff,'Difference Image');

% Color correction and recognization
color_isolated_img = isolate_colors(difference_fname,color_thresh,state_fname);
imwrite(im2bw(color_isolated_img,0.1),color_iso_bin);
o_p_img = further_filter(color_iso_bin);
display_pic(o_p_img,'Fully Processed Binary');

% Centroid location & angle
gameState = image_analyze(o_p_img,state_fname);

%launch GUI and interact with simulation
gui_app = GUI_Correct();
color_val = gui_app.ColorSelectDropDown.Value;
set_param(motor_input,'Value','0');
rto = get_param(gcbh,'RuntimeObject');  %Get current Motor Position
while isvalid(gui_app)
    color_val = gui_app.ColorSelectDropDown.Value;
    desired_angle =  closest_color(color_val,gameState,round(rto.InputPort(1).Data));
    set_param(motor_input,'Value',int2str(desired_angle)); %update motor position here
    while ( abs(round(rto.InputPort(1).Data) - desired_angle) > 5 )
        pause(0.5);
    end
    set_param(motor_input,'Value','0'); %reset motor position
    while (strcmp(color_val,gui_app.ColorSelectDropDown.Value) == 1) 
        pause(0.1);
    end 
end

pause(2);
set_param(SIM_file, 'SimulationCommand', 'stop'); %stop simulation

%% end main -- Functions and Descriptions Below

%% Init Program
function prog_init()
    close all;
    clc;
    clear;
    clear('cam');
end

%% Camera Init Function
function cam_profile = init_cam(webcam_list,cam_name)
    %searches webcam list camera name provided, then returns camera struct
    cam_profile = webcam(find(contains(webcam_list,cam_name)));
    cam_profile.Brightness = 100; %scale brightness of image (idk what max val is -Uche)
end

%% Show any picture taken
function display_pic(img,fig_title)
    figure();
    imshow(img);
    title(fig_title);
end

%% Washer & color isolation
%{
looks at each pixel of the difference image and checks it's RGB values
if all RGB values are over the threshold (defined at top as 'color_thresh')
then, that pixel from the difference image will be replaced with the same
pixel from the original unfilterd image

This results in a finer filtering tool than just using erosion and dilation
%}
function corrected_img = isolate_colors(file_to_correct,thresh,OG_img)
    corrected_img = imread(file_to_correct);
    orginal = imread(OG_img);
    [height,width,~] = size(corrected_img);
    for i = 1:height
        for j= 1:width
            if (corrected_img(i,j,1) > thresh) || ...
               (corrected_img(i,j,2) > thresh) || ...
               (corrected_img(i,j,3) > thresh)

                corrected_img(i,j,:) = orginal(i,j,:);
            end
        end
    end
end

%% angle and location analysis
%{
takes the completely filtered image and identifies circlular centroids
The number and location of each centroid is recorded and exported to the 
state variable
state variable contains color of shape at centroid, coordinate location on
picture and angle with reference to gameboard
%}
function Image_Analysis = image_analyze(Filtered_img,og_fname)
    %% Call regionprops 
    Image_Orig = imread(og_fname);
    STATS = regionprops(Filtered_img, 'all');
    a = length(STATS);
    state.Num_of_Shapes = a;
    
    center_circle_x = 271;
    center_circle_y = 242;
    for c = 1:a
        state(c).location = STATS(c).Centroid;
        j = round(STATS(c).Centroid(:,2));
        y = round(STATS(c).Centroid(:,1));
        
        centroid_x = y;
        centroid_y = j;
        
        c_difference_x = centroid_x-center_circle_x; 
        c_difference_y = center_circle_y-centroid_y;
        
        centroid_angle = rad2deg(atan2(c_difference_y,c_difference_x));
        if (centroid_angle < 0)
           state(c).Angle = centroid_angle + 360;
        else
           state(c).Angle = centroid_angle;
        end
         
        
        color_vector = Image_Orig(j+10,y,:); %plus 10 offset because washer has hole in middle
        if (color_vector(1) > 135) && (color_vector(2) < 120) && (color_vector(3) < 110)
            state(c).color = 'Red';
        elseif (color_vector(1) < 60) && (color_vector(2) > 50) && (color_vector(3) < 120)
            state(c).color = 'Green';
        elseif (color_vector(1) < 150) && (color_vector(2) < 190) && (color_vector(3) > 150)
            state(c).color = 'Blue';
        else
            state(c).color = 'Yellow';
        end
    end
    Image_Analysis = state;
end

%% final image filtering
%{
Further filters the finely filtered image through matlabs builtin erosion
and dialtion tools. Outcome is a binary image contaiing circular regions
where washers are located
%}
function filtered_img = further_filter(bin_pic)
    input_file = imread(bin_pic);
    SE = strel('disk',6);
    input_file = imerode(input_file, SE);
    imwrite(input_file,bin_pic);
    
    SE = strel('disk',8);
    input_file = imread(bin_pic);
    input_file = imdilate(input_file, SE);
    imwrite(input_file,bin_pic);
    input_file = imread(bin_pic);
    
    SE = strel('disk',5);
    filtered_img = imerode(input_file, SE);    
end

%{
Matches a desired color to any found in the gamestate variable
if there is a match, the angle to the washer's position in a clockwise 
matter is calculated. The Washer witht the smallest angle with reference
To the motor shaft's current position is returned
%}
function angle = closest_color(color,state,current_position)
    [~,entries] = size(state);
    angle = round(current_position);
    difference = 999;   %arbitrary impossible difference in angle
    for i = 1:entries
        if (strcmp(state(i).color,color) == 1)
            new_difference = abs(current_position - state(i).Angle);
            if (new_difference < difference)
                difference = new_difference;
                angle = round(state(i).Angle);
            end
        end
    end
end

