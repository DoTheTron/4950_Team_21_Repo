%{
    controls the actuator from the motor model
    direction of 1 = extend actuator
    direction of 0 = contract actuator
%}

function control_actuator_f(actuator_input,direction)
    set_param(actuator_input,'Value',int2str(direction));
    pause(1);
end