%recuperaçao modulo 1 
%7)questao 7
%joao vitor viana 204
function q7(~)
    close all;
 soma=4;
 cont=1;
    for x=3:2:15000
       if(mod(cont,2))
        soma=soma-4/x;
        cont=cont+1;
       else
        soma=soma+4/x;
        cont=cont+1;
       end
   end
    fprintf("a precisao alcaçada foi :%.4f ",pi-soma)
end