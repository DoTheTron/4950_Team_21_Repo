%% angle and location analysis
%{
takes the completely filtered image and identifies circlular centroids
The number and location of each centroid is recorded and exported to the 
state variable
state variable contains color of shape at centroid, coordinate location on
picture and angle with reference to gameboard
%}
function Image_Analysis = image_analyze_f(Filtered_img,og_fname)
    %% Call regionprops 
    Image_Orig = imread(og_fname);
    STATS = regionprops(Filtered_img, 'all');
    a = length(STATS);
    state.Num_of_Shapes = a;
    
    center_circle_x = 272;
    center_circle_y = 247;
    for c = 1:a
        state(c).location = STATS(c).Centroid;
        j = round(STATS(c).Centroid(:,2));
        y = round(STATS(c).Centroid(:,1));
        
        centroid_x = y;
        centroid_y = j;
        
        c_difference_x = centroid_x-center_circle_x; 
        c_difference_y = center_circle_y-centroid_y;
        
        centroid_angle = rad2deg(atan2(c_difference_y,c_difference_x));
        if (centroid_angle < 0)
           state(c).Angle = centroid_angle + 360;
        else
           state(c).Angle = centroid_angle;
        end
         
        
        color_vector = Image_Orig(j,y,:); %plus 12 offset because washer has hole in middle
        if (color_vector(1) > 135) && (color_vector(2) < 120) && (color_vector(3) < 110)
            state(c).color = 'red';
        elseif (color_vector(1) < 60) && (color_vector(2) > 50) && (color_vector(3) < 120)
            state(c).color = 'green';
        elseif (color_vector(1) < 150) && (color_vector(2) < 190) && (color_vector(3) > 150)
            state(c).color = 'blue';
        else
            state(c).color = 'yellow';
        end
    end
    Image_Analysis = state;
end