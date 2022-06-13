%recuperaçao modulo 1 
%11)questao 11
%joao vitor viana 204
function q11()
    clc; close all;
    
    %menu
    opcao=1;
    while(opcao~=0)
        opcao=menu('quetao 11','area_circulo',' area_triangulo','area_trapezio','sair');
        switch(opcao)
            case 1
                area_circulo();
            case 2
                area_triangulo();
            case 3
                area_trapezio();
            case 4
                disp('voltando para o menu principal')
                opcao=0;
        end
    end
    
end

function area_circulo(~)
    r=input('digite o raio');
    fprintf("área do cirulo é: %f",pi*r^2);
end
function area_triangulo(~)
   b=input('digite a base');
   h=input("digite a altura");
    fprintf("área do triangulo  é: %f",b*h/2);
end

function area_trapezio(~)
   b=input('digite a base 1');
   b2=input('digite a base 2');
   h=input("digite a altura");
   fprintf("área do trapezio é: %f",(b+b2)*h/2)
end