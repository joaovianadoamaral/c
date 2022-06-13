%recuperaçao modulo 1 
%9)questao 9
%joao vitor viana 204
function q9(~)
    clear;clc;close all;
    %1)
    % escrever dados da tabela
    v=10:10:80;
    f=[25 70 380 550 610 1220 830 1450];
    
    %2)plot sem unir os pontos
    plot(v,f,'o','markersize',10,'LineWidth',3,"Color",'k')
    grid on
    hold on
    title(" velocidade x força")
    xlabel("velociade (m/s)")
    ylabel("newtons (n)")
    
    %polinomio que se adequa aos dados
    p=polyfit(v,f,1);
    x=linspace(0,100,8);
    y=polyval(p,x);
    plot(x,y)
end