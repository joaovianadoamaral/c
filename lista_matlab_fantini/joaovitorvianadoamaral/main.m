clc;clear; close all;

%recuperaçao modulo 1 

%joao vitor viana 204

%insere a condiçao para o loop while e menu
opcao=1;

while(opcao~=0)

    %criação do menu
    opcao=menu('lista recuperaçao ','questao  1','questao 2','questao 3', ...
        'questao 4','questao 5','questao 6','questao 7','questao 8','questao 9', ...
        'questao 10','questao 11','questao 12','sair');

    switch(opcao)
        case 1
            disp('iniciando exercicio 1....')
            igual=q1();
            if(igual)
                disp('erro... voce digitou angulos iguais')
                break;
            end
        case 2
            disp('iniciando exercicio 2....')
            q2();
        case 3
            disp('iniciando exercicio 3....')
            q3();
        case 4
            disp('iniciando exercicio 4....')
            q4();
        case 5
            disp('iniciando exercicio 5....')
            q5();
        case 6
            disp('iniciando exercicio 6....')
            q6();
        case 7
            disp('iniciando exercicio 7....')
            q7();
        case 8
            disp('iniciando exercicio 8....')
            q8();
        case 9
            disp('iniciando exercicio 9....')
            q9();
        case 10
            disp('iniciando exercicio 10....')
            load("lista04_dados1_Matlab.mat");
            q10(M);
            
        case 11
            disp('iniciando exercicio 11....')
            q11();
        case 12
            disp('iniciando exercicio 12....')
            q12();
        case 13
            disp('saindo....')
            opcao=0;
        otherwise
            disp('voce digitou uma opcao invalida... tente denovo \n')
           
    end

end
disp('o progama terminou ')