#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pi 3.14159265359

//joao vitor viana 204 
//nicolas 204
//vitor 204
//pedro arthur 205
//seccao 2 a 5 lista 00


//declara as funcoes que fazem cada seccao
void case2(void);
void case3(void);
void case4(void);
void case5(void);

int main (){

	// menu e variaveis
	int opcao;

	opcao =2;//condicao para inicio do loop

	while(opcao!=0){

		printf("digite qual a seccao desejada (2 a 5), digite para sair 0 \n");
		scanf("%d",&opcao);
		fflush(stdin);

		switch(opcao){

			case 2:  //faz a seccao 2
				printf("iniciando a seccao 2...\n\n"); 
				case2();
				continue;
			case 3:  //faz a seccao 3
				printf("iniciando a seccao 3...\n\n"); 
				case3();
				continue;
			case 4:  //faz a seccao 4
				printf("iniciando a seccao 4...\n\n"); 
				case4();
				continue;
			case 5: //faz a seccao 5
				printf("iniciando a seccao 5...\n\n"); 
				case5();
				continue;
			case 0://encerra o programa
				printf("encerrando...\n");
				break;

			default://caso o usuario digite uma seccao invalida
				printf("digite uma opcao valida \n\n");

		}
	

	}

	return (0);
}

void case2(void){

	//variaveis local da funcao
	int opcao,i, tam,tamanh,x, y,r, rem,m,ih;
	char str[41],frase[81];
	int f=0, tamanho, space=0, a=0;
	int inteiro;
	int b,c,s1,s2,s3;

	opcao=1;

	while(opcao!=0){
		//menu ja montado nao meche nessa parte so nos cases
		printf("escolha qual programa voce quer :(13 a 24)\n");
		printf("diite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//faça seus comentarios assim
			case 13:

				printf("Insira uma string: ");
				setbuf(stdin,NULL);
				fgets(str,40,stdin);

				tam = strlen(str);

				printf("Sua string de tras pra frente: ");
				for (i = tam; i >= 0; i--)
				{
					printf("%c", str[i]);
				}
				printf("\n");				
				continue;
			//
			case 14:

				printf("Insira uma frase: ");
				setbuf(stdin,NULL);
				fgets(frase,80,stdin);

				tamanho = strlen(frase);

				printf("Sua frase: %s",frase);
				printf("Qntd de caracteres: %d\n",tamanho-1);
				continue;
			//
			case 15:

				printf("Digite uma frase: ");
				setbuf(stdin,NULL);
				fgets(frase,80,stdin);

				tamanho = strlen(frase);

				printf("Sua frase: %s",frase);

				for (int i = 0; i <= tamanho; i++)
				{
					f = frase[i];
					if(f == 32) {
						space++;
					}
					if((f == 65) || (f == 97)) {
						a++;
					}
				}

				printf("Numero de spacos: %d\nNumero de 'a's; %d\n",space,a);
				continue;
			//
			case 16:

				printf("Digite um inteiro que direi se ele eh par ou impar. ");
				printf(">> ");
				scanf("%d",&inteiro);


				if((inteiro % 2)==0) {
					printf("O numero eh par.\n");
				}
				if ((inteiro %2)>0)
				{
					printf("O numero eh impar.\n");
				}
				continue;
			//
			case 17:
				printf("Digite um numero e direi se ele eh positivo, negativo ou zero. >> ");
				scanf("%d",&inteiro);


				if (inteiro<0)
				{
					printf("O numero eh negativo.\n");
				} 
				if (inteiro>0) 
				{
					printf("O numero eh positivo. \n");
				} 
				if (inteiro==0)
				{
					printf("O numero eh zero. \n");
				}
				continue;
			//
			case 18:

				printf("Insira o valor de 'x': ");
				scanf("%i",&x);
				printf("Insira o valor de 'y': ");
				scanf("%i",&y);


				rem = x % y;

				if (rem==0)
				{
					printf("x(%d) eh divisivel por y(%d).\n", x,y);
				} else {
					printf("x(%d) nao eh divisivel por y(%d).\n",x,y);
				}
				continue;
			//
			case 19:
		     	printf("Digite o valor de x: ");
				scanf("%i",&x);

				printf("Digite o valor de y: ");
				scanf("%i",&y);


				m = y % x;

				if (m==0)
				{
					printf("O segundo e multiplo do primeiro. \n");
				} else {
					printf("O segundo NAO e multiplo do primeiro. \n");
				}
				continue;
			//
			case 20:
				printf("Insira um numero inteiro na base 16: ");
				scanf("%x",&ih);
	

				printf("Numero lido:\n    Na base 16: %x\n    Na base 10: %d\n",ih,ih);
				continue;
			//
			case 21:
				// 21 - AND, OR, XOR na base 10
				printf ("Digite dois numeros: ");
				scanf ("%d" "%d", &x, &y);
				
				r = x <= y && x == y;
				printf ("\nAND\n%d <= %d && %d = %d = %d\n\n", x,y,x,y,r);

				r = x != y && x < y;
				printf ("%d != %d && %d < %d = %d\n\n", x,y,x,y,r);

				r = x <= y || x == y;
				printf ("OR\n%d <= %d || %d = %d = %d\n\n", x,y,x,y,r);

				r = x != y || x < y;
				printf ("%d != %d || %d < %d = %d\n\n", x,y,x,y,r);

				r = !(x <= y);
				printf ("NOT\n!(%d <= %d) = %d\n\n", x,y,r);

				r = !(x != y);
				printf ("!(%d != %d) = %d\n\n", x,y,r);

				r = x <= y ^ x == y;
				printf ("XOR\n%d <= %d ^ %d = %d = %d\n\n", x,y,x,y,r);

				r = x != y ^ x < y;
				printf ("%d != %d ^ %d < %d = %d\n\n", x,y,x,y,r);
				continue;
			//
			case 22:
				continue;
			//
			case 23:
				continue;
			//
			case 24:
				printf("condicao de existencia de um triangulo...\n");
				printf("digite o lado 1:");
				scanf("%d",&a);
				printf("digite o lado 2:");
				scanf("%d",&b);
				printf("digite o lado 3:");
				scanf("%d",&c);
				//verifica atraves do modulo se e possivel a construcao

				if(a-b<0)
					s1=b-a;
				else
					s1=a-b;

				if(a-c<0)
					s2=c-a;
				else
					s2=a-c;

				if(b-c<0)
					s3=c-b;
				else
					s3=b-c;

				//condiçao de existencia
				if(c>s1&&c<a+b&&b>s2&&b<a+c&&a>s3&&a<c+b)
					printf("o triangulo existe.....\n");
				else
					printf("o triangulo nao existe....\n");
				continue;
			//

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

void case3(void){

	//variaveis local da funcao
	int opcao;

	int a,b,c,d,e,f,p,i;
	float aa,bb,cc,dd,ee;


	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(25 a 34)\n");
		printf("diite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 25:
				continue;
			//
			case 26:

				printf("Digite o primeiro numero: ");
				scanf("%d",&a);
				printf("Digite o segundo numero: ");
				scanf("%d",&b);
				printf("Digite o terceiro numero: ");
				scanf("%d",&c);
				printf("Digite o quarto numero: ");
				scanf("%d",&d);

				if ((a>b)&&(a>c)&&(a>d))
				{
					printf("O maior numero eh: %d\n", a);
				} if ((b>a)&&(b>c)&&(b>d))
				{
					printf("O maior numero eh: %d\n", b);
				} if ((c>a)&&(c>b)&&(c>d))
				{
					printf("O maior numero eh: %d\n", c);
				} if((d>a)&&(d>b)&&(d>c)) {
					printf("O maior numero eh: %d\n", d);
				}
				continue;
			//
			case 27:
				p=0;i=0;
				printf("Insira o primeiro numero: ");
				scanf("%d",&a);
				printf("Insira o segundo numero: ");
				scanf("%d",&b);
				printf("Insira o terceiro numero: ");
				scanf("%d",&c);
				printf("Insira o quarto numero: ");
				scanf("%d",&d);
				printf("Insira o quinto numero: ");
				scanf("%d",&e);
				printf("Insira o sexto numero: ");
				scanf("%d",&f);

				if ((a%2)==0)
				{
					p = p+a;
				} else {
					i = i+a;
				}

				if ((b%2)==0)
				{
					p = p+b;
				} else {
					i = i+b;
				}

				if ((c%2)==0)
				{
					p = p+c;
				} else {
					i = i+c;
				}

				if ((d%2)==0)
				{
					p = p+d;
				} else {
					i = i+d;
				}

				if ((e%2)==0)
				{
					p = p+e;
				} else {
					i = i+e;
				}

				if ((f%2)==0)
				{
					p = p+f;
				} else {
					i = i+f;
				}

				printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
				printf("Soma dos pares: %d\n", p);
				printf("Soma dos impares: %d\n", i);
				continue;
			//
			case 28:

				printf("Digite a nota final(0-100): ");
				scanf("%d",&a);

				if ((a<0)||(a>100))
				{
					printf("\n");
				} else {
				if ((a>=90)&&(a<=100))
				{
					printf("	Conceito A\n");
				}
				if ((a>=80)&&(a<90))
				{
					printf("	Conceito B\n");
				}
				if ((a>=70)&&(a<80))
				{
					printf("	Conceito C\n");
				}
				if ((a>=60)&&(a<70))
				{
					printf("	Conceito D\n");
				}
				if (a<60)
				{
					printf("	Conceito E (reprovado)\n");
				} }
				continue;
			//
			case 29:
				printf("Digite um valor inteiro: ");
				scanf("%d",&a);
				b= a;

				for (i = (a-1); i > 0; i--)
				{
					b=b*i;
				}

				printf("Fatorial de %d = %d\n",a,b);
				continue;
			//
			case 30:
				aa=0,bb=1,cc=0;
				for (i = 1; i <= 50; i++)
					{
						cc= (bb/i);
						aa = aa+cc;
						bb= bb+2;
					}

					printf("S = %f\n",aa);
				
				continue;
			//
			case 31:
				dd=50;
				for (i= 1; i <= 50 ; i++)
				{
					bb = pow(2,i);
					cc = bb/dd;
					aa = aa+cc;
					dd = dd-1;
				}

				printf("S = %.2f\n",aa);
				continue;
			//
			case 32:
				bb=37; cc=38; dd=0;
				for ( i = 1; i <=37; i++)
				{
					printf("(%.0fx%.0f)/%d\n",bb,cc,i);
					aa = bb*cc;
					ee= aa/i;
					dd = dd+ee;
					bb = bb-1;
					cc = cc-1;
				}

				printf("S = %f\n", dd);
				continue;
			//
			case 33:
				a=1000;b=0,c=0;
				for (i= 1; i <= 50; i++)
				{
					if ((a%2)==0) {
						printf(" + "); 
						b = b + (a/i);
					}
					else {
						printf(" - ");
						c = c + (a/i);		
					}
					printf("%d/%d",a,i);
					//printf("\n");
					a = a-3;
				}

				d = b-c;
				printf("\nSoma = %d \n",d);
				continue;
			//
			case 34:
				a=480; b=10;
		        aa=0; bb=0; 	
				for (i = 0; i <= 30; i++)
				{
					if ((a%2)==0)
					{
						printf(" + ");
						aa = aa+(a/b);
					} else {
						printf(" - ");
						bb = bb+(a/b);
					}
					printf("%d/%d",a,b);
					a = a-5;
					b = b+1;
				}

				cc = aa-bb;
				printf("\nSoma = %.2f\n",cc);
				continue;
			//
			
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
					if((2*i*M_PI-1)!=0)
						a+=(i+2*M_PI)/(2*i*M_PI-1);
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
void case5(void){

	//variaveis local da funcao
	int opcao,n,cont;

	opcao=1;

	while(opcao!=0){
		
		printf("escolha qual programa voce quer :(42 a 49)\n");
		printf("diite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//funcionando
			case 42:
				//ler o tamanho do quadrado de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=0;i<n;i++){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionado
			case 43:
				//ler o tamanho do quadrado de numeros
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=0;i<n;i++){// mostra uma linha do numero digitado
							printf("%d ",n);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionando
			case 44:
				//ler o tamanho do limite da sequencia do quadrado
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=1;j<=n;j++){
						for(int i=1;i<=n;i++){// mostra uma linha de sequencia ate o numero digitado
							printf("%d ",i);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionando
			case 45:
				//ler o tamanho do limite da sequencia do quadrado
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=1;j<=n;j++){
						for(int i=n;i>=1;i--){// mostra uma linha de sequencia inversa ate 1
							printf("%d ",i);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				
				continue;
			//funcionando
			case 46:
				//ler o tamanho do cateto de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=n-j;i>=1;i--){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 47:
				//ler o tamanho do cateto de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=1;i<=1+j;i++){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 48:
				//ler o tamanho do cateto da sequencia
				printf("digite o lado do cateto entre 2 e 9\n");
				scanf("%d",&n);
				
				//verifica se n esta entre 3 e 15
				if(n>=2&&n<=9){
					for(int j=1;j<=n;j++){
						//para mostrar na sequencia correta ultiliza um cont
						cont=1;
						for(int i=n-j+1;i>=1;i--){// mostra uma linha de sequencia
							printf("%d ",cont);
							cont++;	
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 49:
				//ler o tamanho do cateto da sequencia
				printf("digite o lado do cateto entre 2 e 9\n");
				scanf("%d",&n);
				
				//verifica se n esta entre 3 e 15
				if(n>=2&&n<=9){
					for(int j=1;j<=n;j++){
						//para mostrar na sequencia correta ultiliza um cont
						cont=0;
						for(int i=n-j+1;i>=1;i--){// mostra uma linha de sequencia
							printf("%d ",n-cont);
							cont++;	
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			
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