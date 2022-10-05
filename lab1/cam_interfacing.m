%% Definitions and Constants
bg_filename = 'bg_img.png';
USB_CAM_NAME = 'USB2.0 PC CAMERA';  %name of USB camera

%% ECE 4950 Fall 2020 Project 2 Demo - Camera Setup
prog_init();
cam = init_cam(webcamlist,USB_CAM_NAME);

%% Capturing and Saving BG Image
img = snapshot(cam);
figure();
imshow(img);
title('Background Image Original');

%% Binary Image processing
imwrite(img, bg_filename); %saves image to filename provided

%Image_Orig = imread(img);
%Image_Background = imread('NoiseBackground.png');
%[height,width,depth] = size(Image_Orig);
%[height_b,width_b,depth_b] = size(Image_Background

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
    cam_profile.Brightness = 50; %scale brightness of image (idk what max val is -Uche)
end