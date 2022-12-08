%{
    controls the emag from the motor model
    direction of 1 = turn on emag
    direction of 0 = turn off emag
%}

function control_emag_f(emag_input,direction)
    set_param(emag_input,'Value',int2str(direction)); %update motor position here
    pause(1);
end