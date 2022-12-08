%{
    Will completely detail all empty and non-empty positions on board
    completes coolor entries and valid angle positions for washers
%}
function complete_state = fill_state_arrary_f(gameState)
    valid_angle_thresh  = [40,90,140,180,210,270,300,360]; %reference to check angle's position
    valid_angle         = [40,90,140,180,210,270,300,360]; %actual angular location of gameboard position
    [entries,~]         = size(valid_angle_thresh);
    state_creation      = struct('color','blank','Angle',0,'location',{});

    for sector_angle = 1:entries
        for i = 1:gameState(1).Num_of_Shapes
            if (gameState(i).Angle < sector_angle)
                state_creation(sector_angle).color = gameState(i).Color;
                state_creation(sector_angle).location = gameState(i).location;
            else
                state_creation(sector_angle).color = 'empty';
                state_creation(sector_angle).location = [0,0];
            end
        end
        state_creation(sector_angle).Angle = valid_angle(sector_angle);
    end
    complete_state = state_creation;
end