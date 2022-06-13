%questao 1)
function igual=q1(~) 
    
    %recuperaçao modulo 1 

    %joao vitor viana 204

    clc;close all;
    %ler parametros inicias
    teta1=input("digite o angulo inicial em graus\n");
    rad=teta1*pi/180;
    
    y0=input("digite a altura inicial \n");
    v0=input("digite a velocidade inicial \n");
    g=10;

   
    dx=input("digite a variacao de x(incremento)\n");
    xf=input("digite o x final\n");
    
    %criar vetor x
     x=0:dx:xf;
    
    %funcao de y1
    p=[-g/(2*v0*v0*cos(rad)*cos(rad)) tan(rad) y0];
    y1=polyval(p,x);
    plot(x,y1)
    grid on
    hold on
    xlabel('distancia em metros')
    ylabel('elevacao em metros')
    title('dois lancamentos de projeteis')
    
    
    %lendo outro angulo
    teta2=input("digite outro angulo diferente em graus\n");
    rad2=teta2*pi/180;
   
    %funcao de y2
    p1=[-g/(2*v0*v0*cos(rad2)*cos(rad2)) tan(rad2) y0];
    y2=polyval(p1,x);
    plot(x,y2)
        
    if(teta1==teta2)
        igual=1;
    else
        igual=0;
    end
  
end