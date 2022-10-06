%% Definitions and Constants
bg_filename = 'bg_img.png';
USB_CAM_NAME = 'USB2.0 PC CAMERA';  %name of USB camera

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
pause(5); %temporary measure to manually change background
img = snapshot(cam);
display_pic(img,'new shot created');
noise_removed = imread(bg_filename)-img;
display_pic(noise_removed,'background - new image');
display_pic(im2bw(noise_removed), 'noise removed binary');
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