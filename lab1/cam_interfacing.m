%% ECE 4950 Fall 2020 Project 2 Demo - Camera Setup
close all
clc
clear
clear('cam')

%% Check Camera List (may have to install MATLAB package)
cam_list = webcamlist
%% Assign webcam to be used
% Pick an index from the camera list above
cam_name = cam_list{3}
%% Check webcam properties
cam = webcam(cam_name)
%% Preview cam
%preview(cam)
%% Snapshot 1
img = snapshot(cam);
figure();
imshow(img)
title('Snapshot 1')
%% Binary Image processing
[bg_img_fname, UC] = imsave(img)
%Image_Orig = imread(img);
%Image_Background = imread('NoiseBackground.png');
%[height,width,depth] = size(Image_Orig);
%[height_b,width_b,depth_b] = size(Image_Background