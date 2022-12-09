%{
    ignores noise that is within 20 degrees of a centroid
    removes duplicate objects that may appear due to noise
%}
function new_state = del_deup_f(state)
    len = state.Num_of_Shapes;
    new_state = state(1);
    new_state(1).Num_of_Shapes = 1;
    n = 1;
    for i=1:len
        if(abs(new_state(n).Angle-state(i).Angle) > 20)
            new_state = [new_state;state(i)];
            n=n+1;
            new_state(1).Num_of_Shapes =  new_state(1).Num_of_Shapes+1;
        end
    end
end