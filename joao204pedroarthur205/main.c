#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

//joao vitor viana 204 
//pedro arthur 205
//seccao 1 lista 00

int main (){

	// menu e variaveis
	int opcao,i,i2,soma;
	float x,y,z;
	char ch,nome[30];

	opcao =1;//condicao para inicio do loop

	while(opcao!=0){
		printf("digite qual o progama da lista desejado:(1 a 12)\ncaso queira sair digite 0 \n");
		scanf("%d",&opcao);
		switch(opcao){

			case 1:
				printf("iniciando o progama 1...\n\n");
				printf(" hello world\n");
				printf("-----------------\n");
				continue;
			case 2:
				printf("iniciando o progama 2...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("%d\n",i);
				printf("-----------------\n");
				continue;
			case 3:
				printf("iniciando o progama 3...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("Numero inteiro digitado: %i\n",i);;
				continue;
			case 4:
				printf("iniciando o progama 4...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("digite outro numero inteiro: \n");
				scanf("%i",&i2);
				printf("resultado: %d\n",i+i2);
				printf("-----------------\n");
				continue;
			case 5:
				printf("iniciando o progama 5...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("digite outro numero inteiro: \n");
				scanf("%i",&i2);
				printf("A soma de %i com %i = %i: \n",i,i2,i+i2);
				printf("-----------------\n");
				continue;
			case 6:
				printf("iniciando o progama 6...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("digite outro numero inteiro: \n");
				scanf("%i",&i2);
				printf("resultado inteiro = %i resto de divisao=%d\n",i/i2,i%i2);
				printf("-----------------\n");
				continue;
			case 7:
				printf("iniciando o progama 7...\n\n");
				printf("digite um numero inteiro: \n");
				scanf("%i",&i);
				printf("digite outro numero inteiro: \n");
				scanf("%i",&i2);
				z=i/i2;
				printf("%i/%i = %f \n",i,i2,z);
				printf("-----------------\n");
				continue;
			case 8:
				printf("iniciando o progama 8...\n\n");
				printf("digite um caracter: \n");

				scanf("%s",&ch);
				//%s para ler um caracter

				printf("caracter lido= %c \n",ch);
				printf("codigo ascii dele : %d\n",ch);
				//usa %d para mostrar o numero do caracter

				printf("-----------------\n");
				continue;
			case 9:
				printf("iniciando o progama 9...\n\n");
				printf("digite seu primeiro nome\n");

				scanf("%s",nome);

				//ler o nome e armazena ate encontrar ''\n'='espaço'
				
				printf("seu nome e : %s\n",nome);

				printf("-----------------\n");
				continue;
			case 10:
				printf("iniciando o progama 10...\n\n");
				
				printf("digite seu  nome completo:\n");
				
				fgets(nome,30,stdin);
				//ler o nome completo digitado pelo teclado com espaço
				
				printf("nome completo: %s\n",nome);
				
				printf("-----------------\n");
				continue;
			case 11:
				printf("iniciando o progama 11...\n\n");
				
				//ler os dados do exercicio
				printf("digite a variavel inteira:\n");
				scanf("%d",&i);
				printf("digite o caracter:\n");
				scanf("%s",&ch);
				printf("digite o numero real:\n");
				scanf("%f",&z);
				printf("digite uma string:\n");
				scanf("%s",nome);
				
				//printa os dados armazenados
				printf("-----------------\n");
				printf("inteiro : %d\n",i);
				printf("char :    %c\n",ch);
				printf("float :   %f\n",z);
				printf("string :  %s\n",nome);
				printf("-----------------\n");
				continue;
			case 12:
				printf("iniciando o progama 12...\n\n");
				printf("digite o primeiro numero: \n");
				scanf("%f",&x);
				printf("digite o segundo numero: \n");
				scanf("%f",&y);
				z=pow(x,y);
				printf("x^y= %.3f\n",z);
				printf("-----------------\n");
				continue;
			
			case 0:
				printf("encerrando...\n");
				break;
			default://caso o usuario digite uma questao invalida
				printf("digite uma opcao valida \n\n");

		}
	



	}

	return (0);
}