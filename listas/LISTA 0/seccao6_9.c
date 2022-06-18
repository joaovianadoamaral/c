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
void case6(void);
void case7(void);
void case8(void);
void case9(void);

int main (){

	// menu e variaveis
	int opcao;

	opcao =2;//condicao para inicio do loop

	while(opcao!=0){

		printf("digite qual a seccao desejada (6 a 9), digite para sair 0 \n");
		scanf("%d",&opcao);
		fflush(stdin);

		switch(opcao){

			case 6:  //faz a seccao 2
				printf("iniciando a seccao 6...\n\n"); 
				case6();
				continue;
			case 7:  //faz a seccao 3
				printf("iniciando a seccao 7...\n\n"); 
				case7();
				continue;
			case 8:  //faz a seccao 4
				printf("iniciando a seccao 8...\n\n"); 
				case8();
				continue;
			case 9: //faz a seccao 5
				printf("iniciando a seccao 9...\n\n"); 
				case9();
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
void case6(void){

	//variaveis local da funcao
	int opcao,m,fat;
	float s,n;



	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(50 a 57)\n");
		printf("digite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 50:
				printf("digite um numero positivo e inteiro :\n");
				scanf("%f",&n);
				if(n>0){
					for(int i=0;i<=n;i++){
						for(int j=n-i;j>=1;j--){
							printf("%d ",j);
						}
						printf("\n");
					}
				}
				else 
					printf("numero invalido \n");
				continue;

			//
			case 51:
				printf("digite um numero positivo e inteiro :\n");
				scanf("%f",&n);
				if(n>0){
					for(int i=1;i<=n;i++){
						for(int j=0;j<i;j++){
							printf("*");
						}
						printf("\n");
					}
				}
				else 
					printf("numero invalido \n");

				continue;
			//
			case 52:
				printf("digite um numero positivo e inteiro :\n");
				scanf("%f",&n);
				if(n>0){
					for(int i=1;i<=n;i++){
						for(int j=0;j<i;j++){
							printf("*");
						}
						printf("\n");
					}
					for(int i=1;i<=n-1;i++){
						for(int j=n-i;j>=1;j--){
							printf("*");
							
						}
						printf("\n");
					}

				}
				else 
					printf("numero invalido \n");

				continue;
			//
			case 53:
				printf("digite um numero positivo e inteiro :\n");
				scanf("%f",&n);
				
				m=1;
				if(n>0){
					for(int k=0;k<n;k++){//for para quebra de linha +qntd de linhas
							
							//faz um for para imprir certa quantidade de espaco
							for(int i=1+k;i<=n-1;i++){
								printf(" ");
							}
							//faz um for para imprir certa quantidade de asterisco
							for(int j=0;j<m;j++){
								printf("*");
								}
						m+=2;
						printf("\n");
					}
					
				}
				else 
					printf("numero invalido \n");

				continue;
			//
			case 54:
				printf("digite um numero positivo e inteiro :\n");
				scanf("%f",&n);	
				if(n>0){
					for(int i=1;i<=n;i++){// codigo para imprimir uma linha de asterisco
						printf("*");
					}
					for(int j=1;j<=n-2;j++){
						printf("\n*");

						for(int i=1;i<=n-2;i++){// codigo para imprimir uma linha de asterisco
							printf(" ");
						}
						printf("*");
					}
					printf("\n");
					for(int i=1;i<=n;i++){// codigo para imprimir uma linha de asterisco
						printf("*");

					}
					printf("\n");
				}
				else{
					printf("numero invalido \n");
					}

				continue;
			//
			case 55:
				//printar parte de cima do diamante na tela
				n=5;
				m=1;
				for(int k=0;k<n;k++){//for para quebra de linha +qntd de linhas
						
						//faz um for para imprir certa quantidade de espaco
						for(int i=1+k;i<=n-1;i++){
							printf(" ");
						}
						//faz um for para imprir certa quantidade de asterisco
						for(int j=0;j<m;j++){
							printf("*");
							}
					m+=2;
					printf("\n");
				}
					
				
				//printar parte de baixo do diamante na tela
				m=1;
				for(int k=0;k<=4;k++){//for para quebra de linha +qntd de linhas
							
							//faz um for para imprir certa quantidade de espaco
							for(int i=4-k;i<=4;i++){
								printf(" ");
							}
							//faz um for para imprir certa quantidade de asterisco
							for(int j=m;j<=7;j++){
								printf("*");
								}
						m+=2;
						printf("\n");
					}
				continue;
			//
			case 56:
				//printar parte de cima do diamante na tela
				printf("digite a quantidade de linhas(impar): \n");
				scanf("%f",&n);
				m=n;
				if(m%2&&n>=1&&n<=19){
					s=n/2+.5;
					
					m=1;
					for(int k=0;k<s;k++){//for para quebra de linha +qntd de linhas
							
							//faz um for para imprir certa quantidade de espaco
							for(int i=1+k;i<=s-1;i++){
								printf(" ");
							}
							//faz um for para imprir certa quantidade de asterisco
							for(int j=0;j<m;j++){
								printf("*");
								}
						m+=2;
						printf("\n");
					}
						
					
					//printar parte de baixo do diamante na tela
					m=1;
					for(int k=0;k<=(n-s);k++){//for para quebra de linha +qntd de linhas
								
								//faz um for para imprir certa quantidade de espaco
								for(int i=(n-s)-k;i<=(n-s);i++){
									printf(" ");
								}
								//faz um for para imprir certa quantidade de asterisco
								for(int j=m;j<=n-2;j++){
									printf("*");
									}
							m+=2;
							printf("\n");
						}
				}
				else
					printf(" o numero nao é impar ou esta entre 1 e 19\n");
				continue;
			//
			case 57:
				//ler o tamanho do cateto de asteriscos
				printf("digite o valor da altura(1a9): \n");
				scanf("%f",&n);
				m=0;

				//verifica se n esta entre 3 e 15
				if(n>=1&&n<=9){
					for(int j=0;j<n;j++){

						for(int i=1;i<=1+j;i++){// mostra uma linha de sequencia
							printf("%d ",i);
						}

						//mostra uma quantidade de espaco adequada

						for(int k=n+10-m;k>=1;k--)
							printf(" ");

						//a soma da linha e o fatorial do maior numero
						s=(1+j);
						for(fat = 1; s > 1; s=s-1)
							fat = fat + s;
						m+=2;
						printf("%d",fat);
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

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

void case7(void){

	//variaveis local da funcao
	int opcao,n;



	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(50 a 57)\n");
		printf("digite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 50:

				continue;

			//
			case 51:

				continue;
			//
			case 52:

				continue;
			//
			case 53:
				continue;
			//
			case 54:

				continue;
			//
			case 55:

				continue;
			//
			case 56:

				continue;
			//
			case 57:

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

void case8(void){

	//variaveis local da funcao
	int opcao,n;



	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(50 a 57)\n");
		printf("digite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//

				continue;

			//
			case 51:

				continue;
			//
			case 52:

				continue;
			//
			case 53:
				continue;
			//
			case 54:

				continue;
			//
			case 55:

				continue;
			//
			case 56:

				continue;
			//
			case 57:

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

void case9(void){

	//variaveis local da funcao
	int opcao,n;



	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(50 a 57)\n");
		printf("digite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 50:

				continue;

			//
			case 51:
		

				continue;
			//
			case 52:

				continue;
			//
			case 53:
				continue;
			//
			case 54:

				continue;
			//
			case 55:

				continue;
			//
			case 56:

				continue;
			//
			case 57:

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