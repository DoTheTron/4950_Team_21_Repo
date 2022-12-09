function pickUp(angle)
    turn_motor_f(motor_input, angle); % turn to index
    control_actuator_f(actuator_input, 1); % extend actuator
    control_emag_f(emag_input, 1); % activate emag
    control_actuator_f(actuator_input, 0); % contract actuator
end
