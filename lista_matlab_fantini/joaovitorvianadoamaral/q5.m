%recuperaçao modulo 1 
%5)questao 5
%joao vitor viana 204

function q5(~) 
    close all;
    n=input("digite a quantidade de linhas, menor que 15\n");
    if(n>=1&&n<=15)
        for ak=1:1:n
             fprintf("linha %i:  ",ak)
            for j=1:1:ak 
                fprintf("* ");
            end
            fprintf("\n");
        end
    else
        disp('voce colocou um numero invalido, encerrando...')
    end
    
end