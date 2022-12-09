%{
    Will completely detail all empty and non-empty positions on board
    completes coolor entries and valid angle positions for washers
%}
function complete_state = fill_state_arrary_f(gameState)
    valid_angle_thresh  = [0,50,90,140,190,220,270,320,360]; %reference to check angle's position
    valid_angle         = [40,0,-45,-90,-135,-180,-225,-270]; %actual angular location of gameboard position
    [~,entries]         = size(valid_angle_thresh);
    state_creation      = struct('color','blank','Angle',0,'location',{});

    for sector_angle = 2:entries
        for i = 1:gameState(1).Num_of_Shapes
            if ((gameState(i).Angle >= valid_angle_thresh(sector_angle-1)) && (gameState(i).Angle < valid_angle_thresh(sector_angle)))
                state_creation(sector_angle-1).color = gameState(i).color;
                state_creation(sector_angle-1).location = gameState(i).location;
                break;
            else
                state_creation(sector_angle-1).color = 'empty';
                state_creation(sector_angle-1).location = [0,0];
            end
        end
        state_creation(sector_angle-1).Angle = valid_angle(sector_angle-1);
    end
    complete_state = state_creation;
end