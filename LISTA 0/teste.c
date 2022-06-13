#include <stdio.h>
#include <math.h>
#define pi 3.14159265359


void case4(void);



int main (){
	case4();

	return (0);
}
void case4(void){

	//variaveis local da funcao
	int opcao,cont,n;
	float angulo,fat,a,b,x;


	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(35 a 41)\n");
		printf("digite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 35:
				printf("                      seno caulculado  || funcao sin() \n");

				//monta tabela com essa variaçao
				for(float i=0;i<2*pi;i=i+0.1){
					
					angulo=i-(pow(i,3)/6)+(pow(i,5)/120)-(pow(i,7)/5040);

					printf("angulo em radianos %.3f     %.4f",i,angulo);
					angulo=i*180/pi;
					printf("                  %.4f\n",sin(angulo));
				}

			continue;

			//
			case 36:
				//montar constante pi
				cont=0;
				angulo=4;
				for(float i=3;i<=15000;i=i+2){
					cont++;
					if(cont%2)
						angulo=angulo-4/i;
					else 
						angulo=angulo+4/i;
				}
				//M_Pi é a constante de pi na blibioteca math.h
				printf("a precisao obtida foi : %f\n",M_PI-angulo);
				continue;
			//
			case 37:
				//montar constante x/sin x
				printf("digite o valor de x em graus: \n");
				scanf("%f",&angulo);
				//transformar para radianos
				angulo=angulo*M_PI/180;
				
				a=1;
				cont=0;
				n=3;
				for(float i=2;i<=40000;i=i+2){

					if(cont%2){

						for(fat = 1; n > 1; n = n - 1)
							fat = fat * n;

						a=a+pow(angulo,i)/fat;
						n=n+2;
					}
					else {

						for(fat = 1; n > 1; n = n - 1)
							fat = fat * n;
						a=a-pow(angulo,i)/fat;
						n=n+2;
					}

					cont++;
				}

				printf("a precisao obtida foi : %f\n",sin(angulo)/angulo-a);

				continue;
			//
			case 38:
				//somatorio
				printf("digite o numero n:\n");
				scanf("%f",&b);
				a=0;
				for(float i=-b;i<=b;i++){
					if((2*i-1)!=0){
						a=a+(i+2)/(2*i-1);
					}
				}
				printf("somatorio: %f\n",a);
				continue;
			//
			case 39:
				//somatorio
				printf("digite o numero n:\n");
				scanf("%f",&b);

				printf("digite o numero x:\n");
				scanf("%f",&x);;

				a=0;
				for(int i=1;i<=b;i++){
					n=i;
					for(fat = 1; n > 1; n = n - 1)
							fat = fat * n;
					a=a+pow(x,i)/fat;

				}
				printf("somatorio : %f\n",a);
				continue;
			//
			case 40:
				//somatorio
				printf("digite o numero n:\n");
				scanf("%f",&b);

				printf("digite o numero y:\n");
				scanf("%f",&x);

				a=0;
				for(int i=1;i<=b;i++){
					n=i;
					for(fat = 1; n > 1; n = n - 1)
							fat = fat * n;
					a=a+pow(x,-i)/fat;

				}
				printf("somatorio : %f\n",a);
				continue;
			//
			case 41:
				//somatorio
				printf("digite o numero n:\n");
				scanf("%f",&b);
				a=0;
				for(int i=1;i<=b;i++){
					if((2*i*M_PI −1)!=0)
						a+=(i+2*M_PI)/(2*i*M_PI −1);
				}
				printf("somatorio : %f\n",a);

				continue;
			//encerra o programa
			case 0:
				printf("voltando ao menu principal....\n\n");
				break;
			default:
				printf("questao invalida  \n");
				continue;


		}
	}
	printf("-----------------\n");

 }