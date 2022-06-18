#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void alocm();
int main(void) {
  int **p,n=5;
  printf("bem vindo a materia em c, leia os comentarios do progama usuario.\n");
  alocm(p,2,2);
  printf("digite os valores da matriz : \n");
  for(int i=0;i<2;i++){
      for(int j=0;i<2;j++)
      scanf("%d",(*(p+i)+j));
  }
  
  return 0;
}
void alocm(int **p,int linhas,int colunas){
    p=(int **) malloc(linhas*colunas*sizeof (int));
}
/*duas maneiras de fazer comentarios com '//'para uma linha e com '**'+// para um intervalo de linhas*/
/*declarar uma variavel 
  int i,a[TAM];
  char c;
  float f;
  ou de forma universal ultilize a notacao no inicio do programa:
  #define VARIAVEL VALOR
  #define TAM 10
*/
/*funcao menu
  void menu(){
    int opcao=1;
    printf("Joao vitor viana, 204\n");
    printf("******************************\n");
    
    while(opcao){
      //responsavel por armazernar a opcao desejada do usuario a cada loop
      printf("digite as questoes desejadas: \n");
      scanf("%d",&opcao);

      switch (opcao){
      //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
      case 1:
        continue;
      case 0:
        printf("saindo do programa....\n");
        break;
      //realizado quando a opcao digitada pelo usuario nao for aplicada a nenhuma possivel
      default:
        printf("opcao invalida, tente novamente.\n");
        continue;

    } 
    }
  }
*/
/*for para preencher matriz
  printf("digite os valores da matriz : \n");
  for(int i=0;i<10;i++){
      for(int j=0;i<10;j++)
      scanf("%d",*(p+i)+j);
    }
*/
/*for para mostrar matriz
  for(int i=0;i<10;i++){
      for(int j=0;i<10;j++)
        printf("%d ",*(*(p+i)+j));
      printf("\n");
    }
*/
/*for para preencher  vetor
  printf("digite os valores do vetor : \n");
  for(int i=0;i<n;i++){
      scanf("%d",(p+i));
    }
*/
/*for para mostrar  vetor
  for(int i=0;i<n;i++){
      printf("%d ",*(p+i));
    }
  printf("\n");
*/
/*alocacao dinamica para vetor
  precisa da blibioteca stdlib
  void alocv(int *p,int n){
    p=(int *) malloc(n * sizeof (int));
  }
*/
/*alocacao dinamica para matriz
  precisa da blibioteca stdlib 'malloc'
  void alocm(int **p,int linhas,int colunas){
    p=(int **) malloc(linhas*colunas*sizeof (int));
  }
*/

