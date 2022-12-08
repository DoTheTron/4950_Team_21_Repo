%{
    Move motor from current postion to desired angle
%}
function angle = turn_motor_f(motor_input,desired_angle)
    rto = get_param(gcbh,'RuntimeObject');  %Get current Motor Position
    set_param(motor_input,'Value',int2str(desired_angle)); %update motor position here
    while ( abs(round(rto.InputPort(1).Data) - desired_angle) > 5 )
        pause(0.5);
    end
    angle = abs(round(rto.InputPort(1).Data));
end