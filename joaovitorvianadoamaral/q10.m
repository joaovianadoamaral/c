%recuperaçao modulo 1 
%10)questao 10
%joao vitor viana 204
function q10(M)
    clc;close all;
   
    %1)dados carregados no menu
   
    %2)
   
    figure (1)
    plot(M(:,1),M(:,2))
    grid on
    hold on
    title(" censo norte americano")
    xlabel("ano")
    ylabel("populaçao")
    
    %ajuste linear
    p=polyfit(M(:,1),M(:,2),1);
    x=linspace(1750,2000,10);
    y=polyval(p,x);
    plot(x,y)
    
    %segundo grau
    figure (2)
    plot(M(:,1),M(:,2))
    grid on
    hold on
    title(" censo norte americano")
    xlabel("ano")
    ylabel("populaçao")
    
    
    p=polyfit(M(:,1),M(:,2),2);
    x=linspace(1750,2000,10);
    y=polyval(p,x);
    plot(x,y)
    
    
    %quarto grau
    figure (4)
    plot(M(:,1),M(:,2))
    grid on
    hold on
    title(" censo norte americano")
    xlabel("ano")
    ylabel("populaçao")
    
    p=polyfit(M(:,1),M(:,2),4);
    x=linspace(1750,2000,10);
    y=polyval(p,x);
    plot(x,y)
    
end