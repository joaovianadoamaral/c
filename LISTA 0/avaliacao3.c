#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//joao vitor 204,pedro arthur 205,vitor hugo 204, nicolas 204, gabriel
//bernado 204
void q1();
void q2();
void q3();
float frand();


int main() {
	int c;

	c=1;//variavel q gerencia as opcoes e mantem o loop
	while(c!=0){
		printf("Digite a opcao desejada 1,2,3 ou 0 para sair. \n");
		scanf("%d",&c);
		switch(c){
			case 1:
				q1();
				continue;
			
			case 2:
				q2();
				continue;
			case 3:
				q3();
				continue;

			case 0:
				printf("saindoo... \n\n");
				break;
			

			default :
			 printf("essa opcao nao existe \n");

		}
    return 0;

		}
}

void q1(){
	int i,tam,contador_espaço;
	
	char str[200];
	printf("digite uma frase de no mínimo de  5 palavras : \n");
	
	//ler a frase toda com um limite de 200 caracteres
	setbuf(stdin,NULL);
	fgets(str,200,stdin);

	tam = strlen(str);//funcao que mostra tamanho string

	//verifica se a frase tem no minimo 5 palavras
	contador_espaço=0;
	for(i =0; i <= tam; i++){
		if(str[i]==' ')
			contador_espaço+=1;
		
		}

	//faz o que é pedido se atender a condiçao
	if(contador_espaço>=4){

	
	//escreve a frase de tras para frente
		printf("sua frase de tras  pra frente: ");
		for (i = tam; i >= 0; i--)
			{
				printf("%c", str[i]);
			}
		}
	else{
		printf("a frase não tem mais que 5 palavras \n");
	}
	printf("\n");
	
}
void q2(){           
	
	int tam,inter,c;
	FILE *p;
	


	printf("Digite o tamanho e o intervalo do acumulador respectivamente(N e n):\n");
	scanf("%d%d",&tam,&inter);
	
	//vetor de tamanho n
	float v[tam],*a;
	a=(float*) calloc(tam/inter,sizeof(float));
	//acumulador criado


	//1) criar vetor aleatorio
	srand(time(NULL));

	//numeros gerados entre 1 e n/10
    for(int i = 0; i<=tam; i++)
		if(1<=tam/10)
	        *(v+i) = 1+rand()%tam/10;
		else
			*(v+i) = tam/10+rand()%1;

	//acumuludor
	c=0;
	for(int j=0;j<=tam/inter;j++){
		for(int i=0+c;i<=inter+c;i++){
			*(a+j)+=*(v+i); 
		}
		c+=inter;
	}

	//escrever os numeros acumulados no arquivo
	p=fopen("acumulador.txt","w");
	for(int i=0;i<tam/inter;i++)
	  fprintf(p,"%.2f \n",*(a+i));
  fclose(p);

}

float frand(){
  float v;
  srand(time(NULL));
  v=rand()%2;
  return v;
}
void q3(int v){
  //definindo as constantes
  float a=0.8,b=0.2,c=0.5,d=0.6,k=0.5,g=0.5,r;
  int n;
  FILE *p;

  printf("digite o valor de n: \n");
  scanf("%d",&n);

  float x[n],y[n],cont;
  x[0]=0;
  y[0]=0;

 for(int i=1;i<=n;i++){ 
    r=frand();
    if (i<19)
      x[i]=0;
    else
      x[i]=k*2;
      
    y[i]= g*(a*y[i-1] + b*x[i] + c*x[i-1] + d*r);
  }

  //valor medio de x e y
  cont=0;
  for(int i=1;i<n;i++){
    cont=(cont+x[i])/2;
  }
  printf("valor médio de x : %f \n",cont);

  cont=0;
  for(int i=1;i<n;i++){
    cont=(cont+y[i])/2;
  }
  printf("valor médio de y : %f \n",cont);


  //escrever x e y no arquivo 
  p=fopen("XeY.txt","w");
  for(int i=0;i<=n;i++){
    fprintf(p," %f %f \n",x[i],y[i]);
  }
  fclose(p);

}