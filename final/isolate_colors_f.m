%% Washer & color isolation
%{
looks at each pixel of the difference image and checks it's RGB values
if all RGB values are over the threshold (defined at top as 'color_thresh')
then, that pixel from the difference image will be replaced with the same
pixel from the original unfilterd image

This results in a finer filtering tool than just using erosion and dilation
%}
function corrected_img = isolate_colors_f(file_to_correct,thresh,OG_img)
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