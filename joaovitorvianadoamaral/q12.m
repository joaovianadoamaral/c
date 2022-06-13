%recuperaçao modulo 1 
%12)questao 12
%joao vitor viana 204
function q12
    clc; close all;
    
    %gerar numeros aleatorios
    
    for j=1:12
       n(j,1)=int16(100*rand());
    end
   
    %criar vetor impar e par
    for i=1:12
        if(mod(n(i,1),2))
            impar(i,1)=n(i,1);
        else
            par(i,1)=n(i,1);
        end
    end
    %mostra como vetor coluna
    disp("vetor n:")
    disp(n)
    disp("vetor impar:")
    disp(impar)
    disp("vetor par:")
    disp(par)
    
    %maiores elementos
    fprintf("maior elemento de vetor n :%d\n",max(n))
    fprintf("maior elemento de vetor par :%d\n",max(par))
    fprintf("maior elemento de vetor impar :%d\n",max(impar))
    
    %menores elementos
    fprintf("menor elemento de vetor n :%d\n",min(n))
    fprintf("menor elemento de vetor par :%d\n",min(par))
    fprintf("menor elemento de vetor impar :%d\n",min(impar))
end