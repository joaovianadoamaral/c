%questao 3)
function q3(~) 
    %recuperaçao modulo 1 

    %joao vitor viana 204

    clc;close all;
    %vetor tempo
    t=0:pi/32:8*pi;
    r=exp(sin(t))-2.*cos(4.*t)-sin((2.*t-pi)./24).^5;
    %funçao polar funciona igual o plot mas nao é recomendada
    polar(t,r);

end