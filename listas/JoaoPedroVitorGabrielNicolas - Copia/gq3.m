%questao 3    
%joao vitor 204,pedro arthur 205,vitor hugo 204, nicolas 204, gabriel
%bernado 204
clear;clc;close all;
  % ler o arquivo dados
    load("XeY.txt");
    
  %2)plot sem unir os pontos
    x=XeY(:,1);
    y=XeY(:,2);
  %faz os graficos junntos
    plot(y,'o','markersize',7,'LineWidth',2,"Color",'k')
    grid on
    hold on
    title(" algoritimo")
    plot(x,'o','markersize',7,'LineWidth',2,"Color",'g')
%cria o ambiente de subplot e faz os graficos separados
figure (2)
subplot(2,1,1)
 %grafico 1
 plot(x,'o','markersize',7,'LineWidth',2,"Color",'g')
 title(" algoritimo x")

 subplot(2,1,2)
 %grafico 2 na mesma figura 
 plot(y,'o','markersize',7,'LineWidth',2,"Color",'k')
 title(" algoritimo y")
 %caucula a media, deu o mesmo resultado que em c
c1=0;c2=0;
 for i=1:100
     c1=(c1+x(i))/2;
     c2=(c2+y(i))/2;
 end
 fprintf('media de x %f e de y %f',c1,c2)
