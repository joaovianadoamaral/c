%recuperaçao modulo 1 
%8)questao 8
%joao vitor viana 204
function q8(~)
    close all;
    
    s1=0;
    s2=0;
    
    for x=-10:1:10
        s1=s1+(2*x+1)/(x+1);
        s2=s2+(x+1)/(x-1);
    end
   fprintf("O somatorio vale: %i",s1+s2)
    
end