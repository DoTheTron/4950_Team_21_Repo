function desired_board = sorting_algorithm(snap_image, user_board)

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
            snap_image([index i]) = snap_image([i index]); %Swap
            % find empty spot (remember indice)
            % move 'index' to empty spot
            % move 'i' to 'index'
            % move empty spot to 'i'
        end
        
    end %for
    desired_board = snap_image;
end %selectionSort