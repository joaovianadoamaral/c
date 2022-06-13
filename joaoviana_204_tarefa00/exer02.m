%joao vitor viana do amaral 204
clear; close all; clc;
%1)
n=20;
x=linspace(-5,5,n);
y=log(x);
figure(1)
plot(x,y)
axis([-5 5 -5 5])
hold on
grid on
%2)
figure(2)
x=linspace(5.1,20,n)
y=sqrt(x-5);
plot(x,y)
axis([5.1 20 -5 5])
hold on
grid on
%3)
figure(3)
x=linspace(-5,5,n);
y=exp(-x.^2);
plot(x,y)
axis([-5 5 -5 5])
hold on
grid on