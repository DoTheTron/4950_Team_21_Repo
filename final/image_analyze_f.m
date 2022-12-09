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
    
    center_circle_x = 245;
    center_circle_y = 250;
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
        
       %find first meaningful value on binary scale, since washer's center
       %is empty
        for i = -15:1:15
            if (y+i < 1)
                y = 1;
            elseif (y+i > 480)
                y = 480;
            end
            
            if (Filtered_img(j,y+i,:) == [1,1,1])
                y = i+y;
                break;
            end
        end

        if (y < 1)
            y = 1;
        elseif (y+i > 480)
            y = 480;
        end
        color_vector = Image_Orig(j,y,:); 

        if (color_vector(1)/(color_vector(1)+color_vector(2)+color_vector(3))>= 0.4)
            state(c).color = 'red';
        elseif (color_vector(2)/(color_vector(1)+color_vector(2)+color_vector(3))>= 0.4)
            state(c).color = 'green';
        elseif (color_vector(3)/(color_vector(1)+color_vector(2)+color_vector(3))>= 0.4)
            state(c).color = 'blue';
        else
            state(c).color = 'yellow';
        end
    end
    Image_Analysis = state;
end