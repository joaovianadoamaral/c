%questao 4
function q4(~)
    close all;
    %recuperaçao modulo 1 
    
    %joao vitor viana 204

    n=input("digite a quantidade de linhas, menor que 26\n");
    if(n>=1&&n<=26)
        for ak=1:1:n
            for j=1:1:ak   
                fprintf("%s ",96+ak);
            end
            fprintf("\n");
        end
    else
        disp('voce colocou um numero invalido, encerrando...')
    end
end