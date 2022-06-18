%questao 2)
function q2(~) 
    %recuperaçao modulo 1 

    %joao vitor viana 204

    clc;close all;
   
    %criando o vetor tempo
    t=0:1/16:100;
    
    %criando as duas funçoes
    x=sin(t).*(exp(cos(t))-2.*cos(4.*t)-sin(t./12).^5);
    y=cos(t).*(exp(cos(t))-2.*cos(4.*t)-sin(t./12).^5);
    
    %gerar graficos XxY
    subplot(1,3,1)
    plot(x,y)
    grid on
    hold on
    title("grafico borboleta")
    xlabel("x")
    ylabel("y")
    
    %gerar graficos XxT
    subplot(1,3,2)
    plot(x,t)
    grid on
    hold on
    title("grafico borboleta")
    xlabel("x")
    ylabel("t")
    
    %gerar graficos YxT
    subplot(1,3,3)
    plot(y,t)
    grid on
    hold on
    title("grafico borboleta")
    xlabel("y")
    ylabel("t")
    
    figure (2)
    
    %gerar graficos XxY
    plot(x,y)
    grid on
    hold on
    title("grafico borboleta")
    xlabel("x")
    ylabel("y")
end