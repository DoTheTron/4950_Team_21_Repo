function save_new_image_f(filename,camera)
    %saves new with camera object and filename provided
    img = snapshot(camera);
    imwrite(img,filename);
end