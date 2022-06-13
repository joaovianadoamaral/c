#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <math.h>
#include <time.h>


//grupo JN
//joao vitor viana do amaral 204
//nicolas da silva 204a

//prototipo de funçoes das questoes
void nrand();
int q2();

int **q3();

void q4(float a,float b,float c,float **ppp);
float **m2x1 ( float linhas , float colunas );

char **m5xn ( int linhas , int colunas );
void q6(char **ch,int linhas,int colunas);

//reserva espaço para as matrizes
int **matriz();
//numeros aleatorios
void rnd(int **p,int n);
//soma as matrizes
void soma();
//mostrar as matrizes
void mostrar();
//
void troca();
void mostrar2(int *a,int n,int m);

int main ( ) {
  //variaveis
  int opcao=1;
  //q2)
  int n,*p,v[n],maior;
  //q3)
  int **pp;
  //q4)
  float a,b,c;
  float **ppp;
  //q6)
  char **ch;
  //q8)
  int **aa,**bb,**cc;
  //q14)
  //v[n] ja declarado
   int u[n];
   int *f,*g;
  //menu 
  while(opcao){

    printf("digite qual a opcao desejada: \n");
    printf("2,3,4,6,8,14 e  0 para sair\n");
    scanf("%d",&opcao);

    printf("iniciando a questao...\n");
    printf("**************************\n\n");

    switch(opcao){
      
      //
      case 2:
        p=v;

        printf("digite o tamanho do vetor entre 2 e 20: \n");
        scanf("%d",&n);
        
        if(n<2&&n>20){//tamanho regulador do vetor
         printf("tamanho invalido \n");
         continue;
        }
        //gerar o vetor e imprime
        nrand(p,n);

        maior=q2(p,n);
        //mostra o maior numero do vetor
        printf("maior numero : %d\n",maior);

        continue;
      case 3:
        printf("digite o valor de n(entre 2 e 10): \n");
        scanf("%d",&n);
        
        if(n<2&&n>20){//tamanho regulador do vetor
         printf("tamanho invalido \n");
         continue;
        }

        //preenche a matriz na funcao
        
        pp=q3(n) ;
        for (int i = 0; i < n; i ++ ) {
          for (int j = 0; j < n ; j ++ )
            printf ( "\t  %i " ,*(*( pp + i )+ j ) );
            printf ( " \n" ) ;
        }
        continue;
      case 4:
        printf("digite os coeficientes a,b,c da equaçao do segundo grau: \n");
        scanf("%f%f%f",&a,&b,&c);
        
        
        ppp=m2x1( 2,1 );

        q4(a,b,c,ppp);

        for (int  i = 0; i < 2; i ++ ) {
          for (int  j = 0; j <1  ; j ++ )
            printf ( "\t %f ",*(*( ppp + i )+ j ) );
                printf ( " \n" ) ;}
        continue;
      
      case 6:
        ch=m5xn(5,100);
        q6(ch,5,100);
        continue;
      case 8:
        printf("digite um valor de n,entre 2 e 10: \n");
        scanf("%d",&n);
        if(n<2||n>10){
          printf("valor invalido : \n\n");
          continue;
        }
        //reservar um espaço de matriz para cada ponteiro
        aa=matriz(n,n);
        bb=matriz(n,n);
        cc=matriz(n,n);
        //preencher as matrizes com numeros aleatorios
        rnd(aa,n);
        rnd(bb,n);
        rnd(cc,n);
        //somar as matrizes e guarda em cc
        soma(aa,bb,cc,n);
        //mostrar a funçoes
        mostrar(aa,n,1);
        mostrar(bb,n,2);
        mostrar(cc,n,3);
      case 14:
        printf("digite um valor de n,entre 2 e 100: \n");
        scanf("%d",&n);
        if(n<2||n>100){
          printf("valor invalido : \n\n");
          continue;
        }
        f=v;
        g=u;
        //primero vetor
        srand(time(NULL));
        for(int i=0;i<n;i++) 
          *( f + i )=1+rand()%99;
        //segundo vetor
         for(int i=0;i<n;i++) 
          *( g + i )=0;
          
          //troca
          troca(f,g,n);
          //mostrar vetores
          mostrar2(f,n,1);
          mostrar2(g,n,2);
        

        continue;
      case 0:
        printf("encerrando...");
        break;
      default:
        printf("opcao invalida,tente de novo \n\n");
        continue;

    }
  }

  return 0;
}

//funcao para gerar um vetor de numeros aleatorios
//funcao questao 2
void nrand(int *p,int n){
 
 /*ponteiro vai receber o endereço do vetor para poder ser retornado e preencher o propio*/


 //blibiotecas stdlib e time necessarias
 srand(time(NULL));

 for( int i=0; i<n; i++)
 //gera numeros no intervalo indefinido
 *(p+i)=rand();

  //mostra o vetor na tela
  printf("vetor gerado : \n");
  for( int i=0; i<n; i++)

    printf("%d ",*(p+i)); 
  printf("\n");
}

int q2(int *p,int n){
 //define o maior numero inicial como o do primeiro do vetor
 int maior=*p;
 //define realmente o maior numero do vetor
 for (int i=0;i<n;i++){
   if(maior<*(p+i))
    maior=*(p+i);
 }
 //retorna o maior numero
 return(maior);
}
int **q3(int n){
  int **pp=(int **)malloc(n*n*sizeof (int));
  for ( int i = 0; i < n ; i ++ )
    *( pp + i) = ( int *) malloc ( n * sizeof ( int) ) ;

  for ( int i = 1; i <= n ; i ++ )
    for ( int j = 1; j<= n ; j ++ ) 
      if((i+j)%2)
        *(*( pp + i-1 ) + j-1) = (i*i) ;
      else
        *(*( pp + i-1 ) + j-1) = (j*j) ;
 
 return (pp) ;



}

float **m2x1 ( float linhas , float colunas )
 {
    int i , j ;
    float ** matriz = (float **) malloc ( linhas * colunas * sizeof ( float) ) ;
    for ( i = 0; i < linhas ; i ++ )
      *( matriz + i) = ( float *) malloc ( colunas * sizeof ( float) ) ;
    for ( i = 0; i < linhas ; i ++ )
      for ( j = 0; j < colunas ; j ++ ) {
    *(*( matriz + i ) + j) =0 ;
    }
    return matriz ;
}
void q4(float a,float b,float c,float **ppp){
   //baskara
   float delta,x1,x2;
   delta=pow(b,2)-4*a*c;

   if(delta>=0){
     x1=(-b + sqrt(delta))/2*a;
     x2=(-b - sqrt(delta))/2*a;
    
      *(*( ppp + 0 ) + 0) = x1;
      *(*( ppp + 1 ) + 0) = x2;
  }
  else
    printf("delta negativo\n");
}
//funcoes questao 6
char **m5xn ( int linhas , int colunas ){
  int i , j ;
  //reserva uma matriz de tamanho dinamico para as strings
  char ** matriz = (char **) malloc ( linhas * colunas * sizeof ( char) ) ;
  for ( i = 0; i < linhas ; i ++ )
    *( matriz + i) = ( char *) malloc ( colunas * sizeof ( char) ) ;
  
  return matriz ;
}
void q6(char **ch,int linhas,int colunas){
  int cont,b;
  //ler e armazena as 5 strings
  printf("digite 5 strings, de enter para ir para proxima: \n\n");
  for ( int i = 0; i <linhas ; i ++ ){
        setbuf(stdin,NULL);
        fgets(*(ch+i),99,stdin);
    }
  //verifica e printa qual a string de maior valor
 cont=strlen(*(ch+0));
  for ( int i = 0; i <linhas ; i ++ ){
    b=strlen(*(ch+i));
    if(b>cont)
     cont=strlen(*(ch+i));
  }

  for ( int i = 0; i <linhas ; i ++ ){
    b=strlen(*(ch+i));
    if(cont==b)
      printf("maior(s) string é :%s ",*(ch+i));
  }
}
//funcao questao 8
//funcao para gerar um vetor de numeros aleatorios
//funcao questao 8
int ** matriz(int linhas ,int colunas){
 int i , j ;
 int ** matriz = (int **) malloc ( linhas * colunas * sizeof ( int) ) ;
 for ( i = 0; i < linhas ; i ++ )
 *( matriz + i) = ( int *) malloc ( colunas * sizeof ( int) ) ;
 for ( i = 0; i < linhas ; i ++ )
  for ( j = 0; j < colunas ; j ++ ) {
    *(*( matriz + i ) + j)=0 ;
 }
 return matriz ;

}
//gera numero aleatorio e preencha
void rnd(int **p,int n){
  srand(time(NULL));
  for (int i = 0; i < n ; i ++ )
    for (int j = 0; j < n ; j ++ ) 
     *(*( p + i ) + j)=1+rand()%99;

}
void soma (int **a,int **b,int **c,int n){
  for ( int i = 0; i < n; i ++ )
    for (int j = 0; j < n ; j ++ ) 
    *(*( c + i ) + j)=  *(*( a + i ) + j)+ *(*( b + i ) + j);
}
void mostrar(int **a,int n,int m){
  printf("matriz: \n%d",m);
  for ( int i = 0; i < n; i ++ ){
    for (int j = 0; j < n ; j ++ ) 
    printf("%d " ,*(*( a + i )+j)) ;
  printf("\n");
  }
}
//questao 14
void troca(int *a,int *b,int n){
  int cont=0;
  for ( int i = n-1; i >=0; i -- ){
    *( b + cont)=*( a + i);
    cont++;
  }
}
void mostrar2(int *a,int n,int m){
  printf("matriz: %d\n",m);
  for ( int i = 0; i < n; i ++ )
    printf("%d " ,*( a + i )) ;
  printf("\n");
  
}