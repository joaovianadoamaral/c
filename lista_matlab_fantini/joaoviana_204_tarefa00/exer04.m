%joao vitor viana do amaral 204
clear; close all; clc;
p1=[-2 4];
p2=[-10 10];
p3=[20 20];
v=[p1;p2;p3]
figure 
plot(v(:,1),v(:,2),'ob')
grid on 
hold on
plot(v(:,1),v(:,2))
line([-2 20],[4 20],'color','r')