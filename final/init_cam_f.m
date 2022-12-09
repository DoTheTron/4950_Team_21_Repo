%% Camera Init Function
function cam_profile = init_cam_f(webcam_list,cam_name)
    %searches webcam list camera name provided, then returns camera struct
    cam_profile = webcam(find(contains(webcam_list,cam_name)));
    cam_profile.Brightness = 150; %scale brightness of image (idk what max val is -Uche)
end