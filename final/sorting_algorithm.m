function desired_board = sorting_algorithm(snap_image, user_board,motor_input,emag_input,actuator_input)

    listSize = numel(snap_image);
    
    for i = (1:listSize-1)

        elem = user_board(i);
        index = i;
        
        % compare two lists
        for j = (i:listSize)    
            if snap_image(j) == elem
                elem = snap_image(j);
                index = j;
            end                              
        end
       
       
        if i ~= index
            %snap_image([index i]) = snap_image([i index]); %Swap
            % find first empty spot (remember indice)
            % empty = first empty spot angle
            for tempCount = 0:numEl
                if snap_image(tempCount).color == empty 
                    empty = snap_image(tempCount).angle;
                    break
                end
            end

            % move 'index' to empty spot
            pickUp(snap_image(index).angle); % pick up washer
            drop(empty); % drop at empty spot
            % move 'i' to 'index'
            pickUp(snap_image(i).angle); % pick up i
            drop(snap_image(index).angle);
            % move empty spot to 'i'
            pickUp(empty);
            drop(snap_image(i).angle);
        end
        
    end %for
    %desired_board = snap_image;
end %selectionSort