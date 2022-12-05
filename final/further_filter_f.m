%% final image filtering
%{
Further filters the finely filtered image through matlabs builtin erosion
and dialtion tools. Outcome is a binary image contaiing circular regions
where washers are located
%}
function filtered_img = further_filter_f(bin_pic)
    SE = strel('disk',8);
    input_file = imread(bin_pic);
    input_file = imdilate(input_file, SE);
    imwrite(input_file,bin_pic);

    input_file = imread(bin_pic);
    SE = strel('disk',12);
    input_file = imerode(input_file, SE);
    imwrite(input_file,bin_pic);
    
    SE = strel('disk',14);
    input_file = imread(bin_pic);
    input_file = imdilate(input_file, SE);
    imwrite(input_file,bin_pic);
    input_file = imread(bin_pic);
    
    SE = strel('disk',8);
    filtered_img = imerode(input_file, SE);     
end