
%questao 2    
%joao vitor 204,pedro arthur 205,vitor hugo 204, nicolas 204, gabriel
%bernado 204
    clear;clc;close all;
    % ler o arquivo dados
    load("acumulador.txt");
    
    %2)plot sem unir os pontos
    
    plot(acumulador(:),'o','markersize',7,'LineWidth',2,"Color",'k')
    grid on
    hold on
    title(" acumulador")
    xlabel("")
    ylabel("vetor y")
    

