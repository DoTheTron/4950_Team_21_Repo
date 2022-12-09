function drop(angle, motor_input, actuator_input, emag_input)
    turn_motor_f(motor_input, angle); % go to index
    control_actuator_f(actuator_input, 1); % extend actuator
    control_emag_f(emag_input, 0); % release washer
    control_actuator_f(actuator_input, 0); % contract actuator
end
