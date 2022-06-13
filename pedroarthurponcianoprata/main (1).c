#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

 
// Recuperacao - Pedro Prata 205
//ex: 20,24,36,41,53,70,87,90,96,99



//declara as funcoes que fazem cada seccao
void case1(void);
void q20();
void q24();
void q36();
void q41();
void q53();
void q70();
float **m2x1( int linhas ,int colunas );
void q87(float a,float b,float c,float **ppp);
float q90();
void nrand(int *p,int n);
void q96();
int q99(int *p,int n);
int main (){

 // menu e variaveis
 int opcao;

 opcao = 2;//condicao para inicio do loop

 while(opcao!=0){
       
        printf("******************\n");
        printf("Pedro Prata - 205\n\n");
  printf("Digite 1 para acessar as questoes, digite 0 para sair. \n");
  scanf("%d",&opcao);
        printf("******************\n");
  switch(opcao){

   case 1: //faz a seccao 2
    case1();
    continue;
   case 0://encerra o programa
    printf("Encerrando...\n");
    break;

   default://caso o usuario digite uma seccao invalida
    printf("Digite uma opcao valida \n\n");

  }


 }

 return (0);
}
//segundo menu
void case1(void){

 //variaveis local da funcao
 int opcao, b16, a, b, c,m,n,*p,v[n],maior;
  float A,B,C,**ppp,soma;

 opcao=1;

 while(opcao!=0){

  printf("escolha qual questao voce quer:\n(20) Questao 20\n(24) Questao 24\n(36) Questao 36\n(41) Questao 41\n(53) Questao 53\n(70) Questao 70\n(87) Questao 87\n(90) Questao 90\n(96) Questao 96\n(99) Questao 99\n(0) Sair\n\n");
  scanf("%d",&opcao);
        printf("******************\n");
     switch(opcao){
   //Base 16
   case 20:
        q20();
    continue;
   //
   case 24:
        q24();
    continue;
   //
   case 36:
        q36();
    continue;
   //
   case 41:
        q41();
    continue;
   //
   case 53:
        q53();
    continue;
   //
   case 70:
        q70();
    continue;
   //
   case 87:
       
        printf("digite os coeficientes a,b,c da equaçao do segundo grau: \n");
        scanf("%f%f%f",&A,&B,&C);
       
       
        ppp=m2x1(2,1);

        q87(A,B,C,ppp);
        printf("raizes :\n");
        for (int i = 0; i < 2; i ++ ) {
          for (int j = 0; j <1 ; j ++ )
            printf ("\t %f ",*(*( ppp + i )+ j ) );
                printf ("\n" );
                }
    continue;
   //
   case 90:
        printf("digite m e n positivos: \n");
        scanf("%d%d",&m,&n);
        if(m<0||n<0){
          printf("numeros invalidos \n");
      continue;
        }
        soma=q90(n,m);
        printf("valor encontrado do somatorio : %.2f\n",soma);
        continue;
   //
   case 96:
        q96();
    continue;
   //
   case 99:
          p=v;
          printf("digite o tamanho do vetor entre 2 e 20: \n");
          scanf("%d",&n);
         
          if(n<2&&n>20){//tamanho regulador do vetor
            printf("tamanho invalido \n");
            continue;
          }
          //gerar o vetor e imprime
          nrand(p,n);

          maior=q99(p,n);
          //mostra o maior numero do vetor
          printf("maior numero : %d\n",maior);
    continue;

   
   case 0:
    printf("voltando ao menu principal...\n");
    break;
   default:
    printf("questao invalida...\n");
    continue;


  }
 }

 }



//questao 16
void q20(){
  int i;
  printf("Insira um numero inteiro na base 16: ");
 scanf("%x",&i);
 printf("Numero lido:\n Na base 16: %x\n Na base 10: %d\n",i,i);
}
//funcao para a questao 24
void q24(){
  int a,b,c,s1,s2,s3;
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
}
//funcao para a questao 36
void q36(){
  //montar constante pi
  int cont=0;
  int angulo=4;
  for(float i=3;i<=15000;i=i+2){
    cont++;
    if(cont%2)
      angulo=angulo-4/i;
    else
      angulo=angulo+4/i;
  }
  //M_Pi é a constante de pi na blibioteca math.h
  printf("a precisao obtida foi : %f\n",M_PI-angulo);
}
//funcao para a questao 41
void q41(){
  //somatorio
  float a,b;
  printf("digite o numero n:\n");
  scanf("%f",&b);
  a=0;
  //M_PI dentro de math.h
  for(int i=1;i<=b;i++){
    if((2*i*M_PI-1)!=0)
      a+=(i+2*M_PI)/(2*i*M_PI-1);
  }
  printf("somatorio : %f\n",a);

}
//funcao para questao 53
void q53(){
  float n,m;

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
}
//funcao para a questao 70
void q70(){
  int m,n,soma;
  printf("digite n e m, sendo estes no intervalo entre 1 e 6: \n");
  scanf("%d%d",&n,&m);
  int v[n][m];
  if(n<=6&&n>=1&&m<=6&&m>=1){
      //preenche a matriz
       for(int i=1;i<=n;i++)
         for(int j=1;j<=m;j++)
           v[i-1][j-1]=2*i+j;
     //mostrar a matriz
     printf("matriz preenchida : \n");
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)
          if(v[i][j]<9)
           printf("%d ", v[i][j]);
          else
           printf("%d ", v[i][j]);

     printf("\n");
     }
     printf("********\n");
     //soma das linhas
     
    for(int i=0;i<n;i++){
       soma=0;
         for(int j=0;j<m;j++)
           soma+=v[i][j];
      printf("soma linha %d: %d\n",i+1,soma);
     }
     
    }
    else
     printf("n ou m invalido tente novamente. \n");
}
//funcoes para a questao 87
float **m2x1 ( int linhas ,int colunas ){
    int i , j ;
    float ** matriz = (float **) malloc( linhas * colunas * sizeof ( float) ) ;
    for ( i = 0; i < linhas ; i ++ )
      *( matriz + i) = ( float *) malloc ( colunas * sizeof ( float) ) ;
    for ( i = 0; i < linhas ; i ++ )
      for ( j = 0; j < colunas ; j ++ ) {
    *(*( matriz + i ) + j) =0 ;
    }
    return matriz ;
}//gera uma matriz 2x1, para para armazenar as raizes
void q87(float a,float b,float c,float **ppp){
  //baskara
   float delta,x1,x2;
   delta=pow(b,2)-4*a*c;

   if(delta>=0){
     x1=(-b + sqrt(delta))/ (2*a);
     x2=(-b - sqrt(delta))/ (2*a);
   
      *(*( ppp + 0 ) + 0) = x1;
      *(*( ppp + 1 ) + 0) = x2;
  }
  else
    printf("delta negativo\n");
}
//funcao para a questao 90
float q90(int n,int m){
  float soma;
  //realiza somatorio
  for(int i=-n;i<+m;i++){
    if(i-3)
      soma+=(2+1)/(i-3);
  }
  return soma;
}
//funcao para a questao 96
void q96(){
  float x,y,n;
  FILE *p;
  printf("digite x0, e o intervalo n respectivamente : \n");
  scanf("%f%f",&x,&n);
  p=fopen("seno1.m","w");
  for(float i=-x;i<x;i+=n){
    y=sin(i);
   fprintf(p,"%f %f\n",i,y);
  }
  fclose(p);
}
//funcao para a questao 99
//funcao para gerar um vetor de numeros aleatorios
void nrand(int *p,int n){
 
 /*ponteiro vai receber o endereço do vetor para poder ser retornado e preencher o propio*/


 //blibiotecas stdlib e time necessarias
 srand(time(NULL));

 for( int i=0; i<n; i++)
 //gera numeros no intervalo definido entre 1 e 100
 *(p+i)=1+rand()%99;

  //mostra o vetor na tela
  printf("vetor gerado : \n");
  for( int i=0; i<n; i++)

    printf("%d ",*(p+i));
  printf("\n");
}
int q99(int *p,int n){
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
