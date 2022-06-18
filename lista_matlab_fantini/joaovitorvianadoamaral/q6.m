%recuperaçao modulo 1 
%6)questao 6
%joao vitor viana 204
function q6(~)
    close all;
    
    somatorio=0;
    somatorio2=0;
 
    j=10;
    g=11;


    for i=480:-10:340
        somatorio2 =somatorio2+i/j;
        j=j+2;
    end

    for i=475:-10:335

        somatorio =somatorio-i/g;
        g=g+2;

    end

 fprintf("o somatorio final e %f: ",somatorio+somatorio2);
end