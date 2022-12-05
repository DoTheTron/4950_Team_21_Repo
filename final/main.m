close all; clc; clear; clear('cam');
definitions;
%%launch motor model

%% Launch GUI and prep camera
camera = init_cam_f(webcamlist,USB_CAM_NAME);
GUI_interface = GUI();
%guidata(GUI_interface,camera);
waitfor(GUI_interface);
backgnd = imread(bg_filename);
display_pic_f(backgnd,'bg image');
fprintf('demonstration complete\n');