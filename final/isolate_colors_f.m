%% Washer & color isolation
%{
looks at each pixel of the difference image and checks it's RGB values
if all RGB values are over the threshold (defined at top as 'color_thresh')
then, that pixel from the difference image will be replaced with the same
pixel from the original unfilterd image

This results in a finer filtering tool than just using erosion and dilation
%}
function corrected_img = isolate_colors_f(file_to_correct,thresh,OG_img)
    red_hold   = [65,150];
    green_hold = [40,90];
    blue_hold  = [60,120];
    center_circle_x = 245;
    center_circle_y = 250;
    corrected_img = imread(file_to_correct);
    orginal = imread(OG_img);
    edge_of_board = 500;
    radius = 241;
    [height,width,~] = size(corrected_img);
    for i = 1:height
        for j= 1:width
            if ((j > edge_of_board) || (radius+5 < sqrt(abs(i-center_circle_y)^2+abs(j-center_circle_x)^2) || ...
                                       (radius-40 > sqrt(abs(i-center_circle_y)^2+abs(j-center_circle_x)^2))))
                corrected_img(i,j,:) = [0,0,0];
            else if ((corrected_img(i,j,1) > red_hold(1))   && (corrected_img(i,j,1) < red_hold(2)))   || ...
                    ((corrected_img(i,j,2) > green_hold(1)) && (corrected_img(i,j,2) < green_hold(2))) || ...
                    ((corrected_img(i,j,3) > blue_hold(1))  && (corrected_img(i,j,3) < blue_hold(2)))
                corrected_img(i,j,:) = orginal(i,j,:);
            else
                corrected_img(i,j,:) = [0,0,0];
            end
        end
    end
end