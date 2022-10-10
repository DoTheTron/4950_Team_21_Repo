%% Definitions and Constants
%adding comment
bg_filename = 'bg_img.png';
USB_CAM_NAME = 'USB2.0 PC CAMERA';  %name of USB camera
cam_width = 640;
cam_height = 480;
color_thresh = 50;
%green threashold ~ 175

%% ECE 4950 Fall 2020 Project 2 Demo - Camera Setup
prog_init();
cam = init_cam(webcamlist,USB_CAM_NAME);

%% Capturing and Saving BG Image
img = snapshot(cam);
display_pic(img,'Background Image Original');

%% Binary Image processing
imwrite(img, bg_filename); %saves image to filename provided
binary_img = im2bw(img);
display_pic(binary_img,'Background Image Binary');

%% testing image subtraction
%{
temporary - waits 5 seconds before taking another picture
to test properly, you should put something in front of the camera in these
5 seconds
%}
pause(30); %stop gap to manually change background
img = snapshot(cam);
display_pic(img,'new shot created');
bg_OG = imread(bg_filename);
noise_removed = bg_OG-img;
display_pic(noise_removed,'background - new image');
display_pic(im2bw(noise_removed), 'noise removed binary');

%% Color correction and recognization
imwrite(noise_removed,'correcting img.png');
pic_properties = struct('height',cam_height,'width',cam_width,'correction',color_thresh);
color_isolated_img = isolate_colors('correcting img.png',pic_properties,img);
display_pic(color_isolated_img,'color isolated image');

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
function corrected_img = isolate_colors(file_to_correct,props,OG_img)
    corrected_img = imread(file_to_correct);
    for i = 1:props.height
        for j= 1:props.width
            if (corrected_img(i,j,1) > props.correction) || ...
               (corrected_img(i,j,2) > props.correction) || ...
               (corrected_img(i,j,3) > props.correction)
           
                corrected_img(i,j,:) = OG_img(i,j,:);
            end
        end
    end
end