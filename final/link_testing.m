%motor_model_updated_F21_22b
input = 'motor_model_updated_F21_22b/Actuator_go';
input2 = 'motor_model_updated_F21_22b/desiredPosition';
SIM_file = 'motor_model_updated_F21_22b';
motor_model_updated_F21_22b;

set_param(SIM_file, 'SimulationCommand', 'start');
set_param(input2,'Value','180');
pause(5);
set_param(input,'Value','0');