#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <complex.h>
#include <time.h>

//nomes
//Joao vitor viana, 204
// nicolas da silva moreira, 204

void menu();

//questao 1)
struct endereco
{
  //cidade,bairro,rua,numero
  char cidade[50];
  char bairro[50];
  char rua[50];
  int numero;
};
typedef struct endereco endereco;

struct dados_escolares
{
  //(numero de matricula, escola anterior, s ́erie matriculada)
  double nmat;

  char escola[50];

  int serie;
};
typedef struct dados_escolares dados;

//dados pessoais + chamada para escolares+ endereco
struct aluno
{
  //nome propio
  char nome1[50];
  //nome do pai
  char nome2[50];
  //nome da mae
  char nome3[50];
  //double pois é um numero inteiro muito grande
  double cpf;
  //dia mes ano separados
  int nacimento[3];
  //estrutura dados_escolares dentro da estrutura aluno
  dados d;
  //estrutura endereco dentro da estrutura aluno
  endereco e;
};
//renomeia 'struct aluno'-> aluno
typedef struct aluno aluno;

aluno leitura();
void mostrar();

//questao 2)
//organizar as operacoes
void menu2();

struct complexo
{
  float real, imag;
};

typedef struct complexo complexo;
//questao 3)
struct ponto
{
  int x, y;
} p1, p2, p3;

typedef struct ponto ponto;

ponto read();
void distancia();
//questao 4)
//organizar as operacoes
void menu3();
struct vetor
{
  float v[3],*p1;
  int n;
};
typedef struct vetor vetor;

vetor produto_escalar();
vetor adicao();
vetor read2();
void modulo();
//questao 5)
struct matriz
{
  int l, c;
  float **p, det;
  float *l1, *l2, *l3, *l4;
  float *c1, *c2, *c3, *c4;
} m1, m2, m3, m4, m5;

typedef struct matriz matriz;

float **mat();
void menu4();
void lxc();
void transposta();
void determinante();
int larquivo();
//funcao main
int main(void)
{
  menu(m1, m2, m3);
  return 0;
}
//menu do programa e onde chama cada questao
void menu(matriz m1, matriz m2, matriz m3)
{
  //q1)
  aluno a;
  //q4)
  vetor v1, v2, v3, v4;
  int opcao = 1;
  printf("Joao vitor viana, 204\n");
  printf("nicolas da silva moreira, 204\n");
  //q5)
  int arq;
  while (opcao)
  {
    //responsavel por armazernar a opcao desejada do usuario a cada loop
    //corpo do menu
    printf("******************************\n");
    printf("digite o numero da questao desejada: \n");
    printf("(1)questao 1\n(2)questao 2\n(3)questao 3\n(4)questao 4\n(5)questao 5\n(0)sair\n");
    scanf("%d", &opcao);
    //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
    switch (opcao)
    {
      //questao (1)
    case 1:
      a = leitura();
      //mostrar dados
      mostrar(a);
      continue;
      //questao (2)
    case 2:
      menu2();
      continue;
      //questao (3)
    case 3:
      //leitura dos pontos
      p1 = read(1);
      p2 = read(2);
      //chamar funcao que mostra a distancia entre os dois pontos
      distancia(p1, p2, p3);
      continue;
      //questao (4)
    case 4:
      //leitura dos vetores
      v1 = read2(1);
      v2 = read2(2);
      if((1<=v1.v[0]<=10)&&(1<=v1.v[1]<=10)&&(1<=v2.v[0]<=10)&&(1<=v2.v[1]<=10)){
        menu3(v1, v2);
      }
      else
        printf("alguma cordenada nao esta dentro do limete \n");
      continue;
      //quetao (5)
    case 5:
      //ler as dimensoes da matriz
      printf("digite n1>1 e 0<=m1<=4:\n");
      scanf("%d%d", &m1.l, &m1.c);

      printf("digite n2>1 e 0<=m2<=4:\n");
      scanf("%d%d", &m2.l, &m2.c);
      //condicao de dimensao
      if (m1.l > 1 && m1.c >= 1 && m1.c <= 4 && m2.l > 1 && m2.c >= 1 && m2.c <= 4)
      {
        //aloca memoria dinamicamente
        m1.p = mat(m1.l, m1.c);
        m2.p = mat(m2.l, m2.c);
        m3.p = mat(m1.l, m1.c);
        //carregar a matriz +menu
        printf("carregar a matriz:\n(1)aleatoriamente\n(2)arquivo texto\n");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
          //gera valores aleatorios para a matriz 1 e 2
          for (int i = 0; i < m1.l; i++)
            for (int j = 0; j < m1.c; j++)
            {
              *(*(m1.p + i) + j) = 0 + rand() % 10;
            }

          for (int i = 0; i < m2.l; i++)
            for (int j = 0; j < m2.c; j++)
            {
              *(*(m2.p + i) + j) = 1 + rand() % 10;
            }
          printf("matriz preenchida com sucesso com numeros aleatorios \n");
        }
        else if (opcao == 2)
        {
          printf("voce selecionou ler de um arquivo \n");
          arq=larquivo(m1);
          arq=larquivo(m2);

        }
        else
          printf("opcao invalida");
        //menu
        menu4(m1, m2, m3, m4, m5);
      }
      else
        printf("dimensoes invalidas\n");
      continue;
      //sair (0)
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
//funcoes para a questao 1)
aluno leitura()
{
  aluno a;
  //leitura dos dados pessoais
  printf("digite o nome do aluno : \n");
  setbuf(stdin, NULL);
  fgets(a.nome1, 50, stdin);

  printf("digite o nome do pai do aluno : \n");
  setbuf(stdin, NULL);
  fgets(a.nome2, 50, stdin);

  printf("digite o nome da mae do aluno : \n");
  setbuf(stdin, NULL);
  fgets(a.nome3, 50, stdin);

  printf("digite o cpf do aluno : \n");
  scanf("%lf", &a.cpf);
  printf("sobre o aniversario do aluno,digite dando espaço(dia mes ano):\n");
  scanf("%d", &a.nacimento[0]);
  scanf("%d", &a.nacimento[1]);
  scanf("%d", &a.nacimento[2]);

  //leitura dos dados escolares
  printf("digite numero de matricula : \n");
  scanf("%lf", &a.d.nmat);

  printf("digite o nome da escola anterior: \n");
  setbuf(stdin, NULL);
  fgets(a.d.escola, 50, stdin);

  printf("a serie matriculada: (1 a 9)fundamental (11 a 13) medio:\n");
  scanf("%d", &a.d.serie);
  //leitura de endereço
  printf("Digite cidade do aluno: \n");
  setbuf(stdin, NULL);
  fgets(a.e.cidade, 50, stdin);

  printf("Digite bairro do aluno: \n");
  setbuf(stdin, NULL);
  fgets(a.e.bairro, 50, stdin);

  printf("Digite a rua do aluno: \n");
  setbuf(stdin, NULL);
  fgets(a.e.rua, 50, stdin);

  setbuf(stdin, NULL);
  printf("Digite o numero da rua do aluno: \n");
  scanf("%d", &a.e.numero);
  return a;
}
void mostrar(aluno a)
{
  //corpo para mostrar os dados e facil visualizacao
  printf("\n");
  for (int i = 0; i < 30; i++)
  {
    printf("*");
  }
  //mostrar dados pessoais
  printf("\ndados do aluno\n");

  printf("nome : %s\n", a.nome1);

  printf("o nome do pai: %s\n", a.nome2);

  printf("o nome da mae: %s\n", a.nome3);

  printf("o cpf : %.0f\n\n", a.cpf);

  printf("aniversario : %d/%d/%d\n\n", a.nacimento[0], a.nacimento[1], a.nacimento[2]);
  //mostrar dados escolares
  printf("matricula : %.0lf\n\n", a.d.nmat);

  printf("escola anterior: %s \n", a.d.escola);

  printf("a serie matriculada: (1 a 9)fundamental (11 a 13) medio: %d\n\n", a.d.serie);
  //mostrar endereço
  printf("endereço do aluno :\n");
  printf("%s%s%s%d\n", a.e.cidade, a.e.bairro, a.e.rua, a.e.numero);
  //corpo para mostrar os dados e facil visualizacao
  printf("\n");
  for (int i = 0; i < 30; i++)
  {
    printf("*");
  }
  printf("\n");
}
//funcoes para a questao 2)
//menu para as operaçoes
void menu2()
{
  complexo a, b, c;
  int opcao = 1;
  while (opcao)
  {
    //responsavel por armazernar a opcao desejada do usuario a cada loop
    printf("******************************\n");
    printf("digite a operacao com numero complexo desejada: \n");
    printf("(1)soma\n(2)multiplicacao\n(3)modulo\n(0)sair da questao\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
      //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
      //soma
    case 1:
      for (int i = 0; i < 10; i++)
        printf("*");
      printf("\nsoma\n");
      printf("dado y1=a1+b1*i e y2=a2+b2*i\n");

      printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
      scanf("%f%f", &a.real, &a.imag);

      printf("Digite a2(parte real) e b2 (parte imaginaria ) : \n");
      scanf("%f%f", &b.real, &b.imag);

      c.real = a.real + b.real;
      c.imag = a.imag + b.imag;

      if (c.imag >= 0)
        printf("A soma de y1 + y2= %.2f +%.2f i\n", c.real, c.imag);
      else
        printf("A soma de y1 + y2= %.2f %.2f i\n", c.real, c.imag);
      printf("\n");
      continue;
      //multiplicacao
    case 2:
      for (int i = 0; i < 10; i++)
        printf("*");
      printf("\nmultiplicacao\n");
      printf("dado y1=a1+b1*i e y2=a2+b2*i\n");

      printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
      scanf("%f%f", &a.real, &a.imag);

      printf("Digite a2(parte real) e b2 (parte imaginaria ) : \n");
      scanf("%f%f", &b.real, &b.imag);

      c.real = a.real * b.real + (a.imag * b.imag * -1);
      c.imag = a.real * b.imag + a.imag * b.real;

      if (c.imag >= 0)
        printf("A multiplicacao de y1 * y2= %.2f +%.2f i\n", c.real, c.imag);
      else
        printf("A multiplicacao de y1 * y2= %.2f %.2f i\n", c.real, c.imag);
      printf("\n");
      continue;
      //modulo
    case 3:
      for (int i = 0; i < 10; i++)
        printf("*");
      printf("\nmodulo\n");
      printf("dado y1=a1+b1*i\n");

      printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
      scanf("%f%f", &a.real, &a.imag);

      c.real = pow(a.real, 2) + pow(a.imag, 2);
      c.imag = sqrt(c.real);

      printf("o modulo de y1= %.2f\n", c.imag);
      printf("\n");
      continue;
      //sair
    case 0:
      printf("voltando ao menu principal....\n");
      break;
      //realizado quando a opcao digitada pelo usuario nao for aplicada a nenhuma possivel
    default:
      printf("opcao invalida, tente novamente.\n");
      continue;
    }
  }
}
//funcoes para a questao 3)
//leitura dos pontos
ponto read(int n)
{
  ponto p;

  printf("Digite as cordenadas x e y do ponto %d: \n", n);
  scanf("%d%d", &p.x, &p.y);

  return (p);
}
//funcao para distancia
void distancia(ponto p1, ponto p2, ponto p3)
{
  float distancia;
  //p3 recebe o modulo da distancia de x
  if (p1.x >= p2.x)
    p3.x = p1.x - p2.x;
  else
    p3.x = p2.x - p1.x;
  //p3 recebe o modulo da distancia de y
  if (p1.y >= p2.x)
    p3.y = p1.y - p2.y;
  else
    p3.y = p2.y - p1.y;
  //mostra a distancia
  distancia = pow(p3.x, 2) + pow(p3.y, 2);
  distancia = sqrt(distancia);
  printf("distancia entre dois pontos : %f\n", distancia);
}
//funcoes para a questao 4)
//menu para as operacoes
void menu3(vetor v1, vetor v2)
{
  vetor v3, v4;
  int opcao = 1;
  while (opcao)
  {
    //responsavel por armazernar a opcao desejada do usuario a cada loop
    printf("\n******************************\n");
    printf("digite a funcao desejada: \n");
    printf("(1)-Modulo do primeiro vetor(v).\n(2)-Modulo do segundo vetor(u).\n(3)-Produto escalar (u .v).\n(4)-Adicao(u + v).\n(0)sair da questao 4)\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
      //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
      //(1)-Modulo do primeiro vetor(v).
    case 1:
      modulo(v1);
      continue;
      //(2)-Modulo do segundo vetor(u).
    case 2:
      modulo(v2);
      continue;
      //(3)-Produto escalar (u .v).
    case 3:
      v4 = produto_escalar(v1, v2);
      continue;
      //(4)-Adicao(u + v).
    case 4:
      v3 = adicao(v1, v2);
      continue;
      //sair
    case 0:
      printf("voltando ao menu principal....\n");
      break;
      //realizado quando a opcao digitada pelo usuario nao for aplicada a nenhuma possivel
    default:
      printf("opcao invalida, tente novamente.\n");
      continue;
    }
  }
}
//funcao que soma
vetor adicao(vetor v1, vetor v2)
{
  float cos;
  vetor v3;
  printf("digite o cosseno entre os vetores \n");
  scanf("%f",&cos);
  v1.v[3]= sqrt((pow(v1.v[0], 2)) + (pow(v1.v[1], 2)));
  v2.v[3]= sqrt((pow(v2.v[0], 2)) + (pow(v2.v[1], 2)));
  v3.v[0]= sqrt(pow(v1.v[3],2)+pow(v2.v[3],2)+2*v1.v[3]*v2.v[3]*cos);
  printf("a adiçao dos vetores é dada por : %.2f\n",v3.v[0]);
  return(v3);
}
//funcao que multiplica
vetor produto_escalar(vetor v1, vetor v2)
{
  vetor v3;
  // guarda o produto escalar
  float produto_escalar; 
       
  // x e y do primeiro vetor
  printf("Coordenada x do primeiro vetor: %.2f\n",v1.v[0]);

  printf("Coordenada y do primeiro vetor: %.2f\n",v1.v[1]);

     
  // x e y do segundo vetor
  printf("Coordenada x do segundo vetor: %.2f\n",v2.v[0]);

  printf("Coordenada y do segundo vetor: %.2f\n",v2.v[1]);
  
     
  // vamos calcular o produto escalar
  produto_escalar = (v1.v[0] * v2.v[0]) + (v1.v[1] *v2.v[1]);
     
  // mostramos o resultado
  printf("O produto escalar é: %f\n", produto_escalar);
  v3.v[0]=produto_escalar;
  printf("\n\n");
  return (v3);
}
//funcao que ler e retorna na struct
vetor read2(int n)
{
  vetor v1;
  //aloca memoria para o vetor
  printf("digite as dimensoes do vetor %d (1<=N<=10): \n", n);
  
  printf("digite o x : \n");
  scanf("%f", &v1.v[0]);

  printf("digite o y : \n");
  scanf("%f", &v1.v[1]);

  //preenche o vetor

  //retorna o vetor
  return (v1);
}
//realiza o modulo de um vetor
void modulo(vetor a)
{
//
printf("********************************************* \n");
printf("coordenada X do vetor : %f\n",a.v[0]);
printf("coordenada y do vetor : %f\n",a.v[1]);
printf("********************************************* \n");
a.v[3]=sqrt((pow(a.v[0], 2)) + (pow(a.v[1], 2)));
printf("\n\nO módulo do vetor é: %.2f\n\n", a.v[3]);
printf("********************************************* \n");
}
//funcoes para a questao 5)
//menu para a questsao 5
void menu4(matriz a, matriz b, matriz c, matriz d, matriz e)
{
  int opcao = 1;
  while (opcao)
  {

    printf("Escolha uma opcao:\n(1)-M1+M2\n(2)-M1*M2\n(3)-M2*M1\n(4)-M1^T\n(5)-M2^T\n(6)-det(M1)\n(7)-det(M2)\n(0)-sair \n");
    scanf("%d", &opcao);

    if (opcao)

      switch (opcao)
      {
        //M1+M2
      case 1:
        //mostrar matriz 1
        printf("\nmatriz 1 : \n");
        for (int i = 0; i < a.l; i++)
        {
          for (int j = 0; j < a.c; j++)
            printf("%.0f ", *(*(a.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //mostrar matriz 2
        printf("matriz 2 : \n");
        for (int i = 0; i < b.l; i++)
        {
          for (int j = 0; j < b.c; j++)
            printf("%.0f ", *(*(b.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        /* soma das duas matrizes a condicao e que ambas tenham o mesmo numero linhas e colunas*/
        if (a.l == b.l && a.c == b.c)
        {
          for (int i = 0; i < a.l; i++)
            for (int j = 0; j < a.c; j++)
            {
              *(*(c.p + i) + j) = *(*(a.p + i) + j) + *(*(b.p + i) + j);
            }
          //mostrar a matriz soma
          printf("soma : \n");
          for (int i = 0; i < b.l; i++)
          {
            for (int j = 0; j < b.c; j++)
              printf("%.0f ", *(*(c.p + i) + j));
            printf("\n");
          }
          printf("*******************\n\n");
        }
        else
        {
          printf("nao é possivel a soma das matrizes ja que nao possuem mesmas dimensoes \n");
          printf("*******************\n\n");
        }
        continue;
        //m1*m2
      case 2:
        //mostrar matriz 1
        printf("\nmatriz 1 : \n");
        for (int i = 0; i < a.l; i++)
        {
          for (int j = 0; j < a.c; j++)
            printf("%.0f ", *(*(a.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //mostrar matriz 2
        printf("matriz 2 : \n");
        for (int i = 0; i < b.l; i++)
        {
          for (int j = 0; j < b.c; j++)
            printf("%.0f ", *(*(b.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //so acontece se o numero de colunas de m1 ==linhas de m2
        if (a.c == b.l)
        {
          //aloca a matriz multiplicacao
          d.p = mat(a.l, b.c);
          d.l = a.l;
          d.c = b.c;
          //armazena e mostra a matriz
          printf("matriz multiplicada : \n");
          lxc(d, a, b);

          printf("*******************\n\n");
        }
        else
        {

          printf("nao é possivel a multiplicacao ja que o numero de colunas de m1 e o numero de linhas de m2 sao diferentes \n");
        }
        continue;
        
        //m2*m1
      case 3:
      //mostrar matriz 2
        printf("matriz 2 : \n");
        for (int i = 0; i < b.l; i++)
        {
          for (int j = 0; j < b.c; j++)
            printf("%.0f ", *(*(b.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //mostrar matriz 1
        printf("\nmatriz 1 : \n");
        for (int i = 0; i < a.l; i++)
        {
          for (int j = 0; j < a.c; j++)
            printf("%.0f ", *(*(a.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //so acontece se o numero de colunas de m2 ==linhas de m1
        if (b.c == a.l)
        {
          //aloca a matriz multiplicacao
          e.p = mat(a.l, b.c);
          e.l = a.l;
          e.c = b.c;
          //armazena e mostra a matriz
          printf("matriz multiplicada : \n");
          lxc(e, b, a);

          printf("*******************\n\n");
        }
        else
        {

          printf("nao é possivel a multiplicacao ja que o numero de colunas de m1 e o numero de linhas de m2 sao diferentes \n");
        }
        continue;
        //transposta m1
      case 4:
        //mostrar matriz 1
        printf("\nmatriz 1 : \n");
        for (int i = 0; i < a.l; i++)
        {
          for (int j = 0; j < a.c; j++)
            printf("%.0f ", *(*(a.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");

        transposta(a);
        continue;
        //transposta m2
      case 5:
        //mostrar matriz 2
        printf("\nmatriz 2 : \n");
        for (int i = 0; i < b.l; i++)
        {
          for (int j = 0; j < b.c; j++)
            printf("%.0f ", *(*(b.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        transposta(b);
        continue;
        //det m1
      case 6:
        //mostrar matriz 1
        printf("\nmatriz 1 : \n");
        for (int i = 0; i < a.l; i++)
        {
          for (int j = 0; j < a.c; j++)
            printf("%.0f ", *(*(a.p + i) + j));
          printf("\n");
        }
        printf("*******************\n");
        //condicao de uma determinante é ter nxm iguais
        if (a.l == a.c)
        {
          printf("determinante da matriz %d: \n", 1);
          determinante(a);
          printf("*******************\n\n");
        }
        else
        {
          printf("nao é possivel achar o determinante pois nao é uma matriz quadrada \n");
          printf("*******************\n\n");
        }
        continue;
        //det m2
      case 7:
        //mostrar matriz 2
        printf("\nmatriz 2 : \n");
        for (int i = 0; i < b.l; i++)
        {
          for (int j = 0; j < b.c; j++)
            printf("%.0f ", *(*(b.p + i) + j));
          printf("\n");
        }
        printf("*******************\n\n");
        //condicao de uma determinante é ter nxm iguais
        //matriz 2
        if (a.l == a.c)
        {
          printf("determinante da matriz %d: \n", 2);
          determinante(b);
          printf("*******************\n\n");
        }
        else
        {
          printf("nao é possivel achar o determinante pois nao é uma matriz quadrada \n");
          printf("*******************\n\n");
        }
        continue;
        //sair
      case 0:
        printf("saindo da questao 5 \n");
        break;
        //opcao padrao
      default:
        printf("opcao invalida, tente de novo \n");
        continue;
      }
  }
}
//gera uma matriz
float **mat(int linhas, int colunas)
{
  int i, j;
  srand(time(NULL));
  float **matriz = (float **)malloc(linhas * colunas * sizeof(float));
  for (i = 0; i < linhas; i++)
    *(matriz + i) = (float *)malloc(colunas * sizeof(float));
  return (matriz);
}
int larquivo(matriz a ){
  FILE *p;
  p=fopen("carregar.txt","r");
  if(p==NULL){
    printf("arquivo não pode ser aberto\n");
    return 0;
  }
  //ler matriz texto ou binario
  for(int i =0;i<a.l;i++)
    for(int j =0;j<a.c;j++){
      fscanf(p,"%f ",(*(a.p+i)+j));
    }
  fclose(p);
  return 0;
}
//transposta
void transposta(matriz a)
{
  //mostrar matriz 2
  printf("matriz transposta : \n");
  for (int i = 0; i < a.c; i++)
  {
    for (int j = 0; j < a.l; j++)
      printf("%.0f ", *(*(a.p + j) + i));
    printf("\n");
  }
  printf("*******************\n\n");
}
//determinante
void determinante(matriz a)
{
  float d1 = 1, d2 = 1, d3 = 1, z, b, c, d;
  float v[3][3];
  /*devido a termos n>1 so é possivel matrizes da ordem 2x2  3x3 4x4 */
  //caso ordem seje 2x2 temos :
  if (a.l == 2 && a.l == 2)
  {
    for (int i = 0; i < a.l; i++)
      for (int j = 0; j < a.c; j++)
      {
        if (i == j)
          d1 *= *(*(a.p + i) + j);
        else
          d2 *= *(*(a.p + i) + j);
      }
    a.det = d1 - d2;
    printf("%.0f\n", a.det);
  }
  //caso ordem seje 3x3 temos :
  if (a.l == 3 && a.l == 3)
  {
    //diagonal principal
    for (int i = 0; i < a.l; i++)
      for (int j = 0; j < a.c; j++)
      {
        if (i == j) // a11 a22 a33 +
          d1 *= *(*(a.p + i) + j);
        if ((i == 0 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 0)) //a12 a23 a31 +
          d2 *= *(*(a.p + i) + j);
        if ((i == 0 && j == 2) || (i == 1 && j == 0) || (i == 2 && j == 1)) //a13 a21 a32 +
          d3 *= *(*(a.p + i) + j);
      }
    //determinante recebe o valor da principal e reinicia as diagonais
    a.det = d1 + d2 + d3;
    d1 = 1;
    d2 = 1;
    d3 = 1;
    //diagonal secundaria
    for (int i = 0; i < a.l; i++)
      for (int j = 0; j < a.c; j++)
      {
        if ((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0)) // a13 a22 a31 +
          d1 *= *(*(a.p + i) + j);
        if ((i == 0 && j == 0) || (i == 1 && j == 2) || (i == 2 && j == 1)) //a11 a23 a32 +
          d2 *= *(*(a.p + i) + j);
        if ((i == 0 && j == 1) || (i == 1 && j == 0) || (i == 2 && j == 2)) //a12 a21 a33 +
          d3 *= *(*(a.p + i) + j);
      }
    a.det -= (d1 + d2 + d3);
    //mostra a determinante
    printf("%.0f \n", a.det);
  }
  //caso ordem seje 4x4 temos :
  if (a.l == 4 && a.l == 4)
  {
    //preenche o vetor 3x3
    z = (**a.p - 1) / *(*(a.p + 0) + 1);
    b = *(*(a.p + 1) + 0) - z * *(*(a.p + 1) + 1);
    c = *(*(a.p + 2) + 0) - z * *(*(a.p + 2) + 1);
    d = *(*(a.p + 3) + 0) - z * *(*(a.p + 3) + 1);
    ;

    if (**a.p != 1)
    {

      v[0][0] = *(*(a.p + 1) + 1) - (b * *(*(a.p + 0) + 1));
      v[0][1] = *(*(a.p + 1) + 2) - (b * *(*(a.p + 0) + 2));
      v[0][2] = *(*(a.p + 1) + 3) - (b * *(*(a.p + 0) + 3));
      v[1][0] = *(*(a.p + 2) + 1) - (c * *(*(a.p + 0) + 1));
      v[1][1] = *(*(a.p + 2) + 2) - (c * *(*(a.p + 0) + 2));
      v[1][2] = *(*(a.p + 2) + 3) - (c * *(*(a.p + 0) + 3));
      v[2][0] = *(*(a.p + 3) + 1) - (d * *(*(a.p + 0) + 1));
      v[2][1] = *(*(a.p + 3) + 2) - (d * *(*(a.p + 0) + 2));
      v[2][2] = *(*(a.p + 3) + 3) - (d * *(*(a.p + 0) + 3));
    }
    else
    {
      v[0][0] = *(*(a.p + 1) + 1) - ((*(*(a.p + 1) + 0)) * *(*(a.p + 0) + 1));
      v[0][1] = *(*(a.p + 1) + 2) - ((*(*(a.p + 1) + 0)) * *(*(a.p + 0) + 2));
      v[0][2] = *(*(a.p + 1) + 3) - ((*(*(a.p + 1) + 0)) * *(*(a.p + 0) + 3));
      v[1][0] = *(*(a.p + 2) + 1) - ((*(*(a.p + 2) + 0)) * *(*(a.p + 0) + 1));
      v[1][1] = *(*(a.p + 2) + 2) - ((*(*(a.p + 2) + 0)) * *(*(a.p + 0) + 2));
      v[1][2] = *(*(a.p + 2) + 3) - ((*(*(a.p + 2) + 0)) * *(*(a.p + 0) + 3));
      v[2][0] = *(*(a.p + 3) + 1) - ((*(*(a.p + 3) + 0)) * *(*(a.p + 0) + 1));
      v[2][1] = *(*(a.p + 3) + 2) - ((*(*(a.p + 3) + 0)) * *(*(a.p + 0) + 2));
      v[2][2] = *(*(a.p + 3) + 3) - ((*(*(a.p + 3) + 0)) * *(*(a.p + 0) + 3));
    }
    //determinante do 3x3
    //diagonal principal
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
      {
        if (i == j) // a11 a22 a33 +
          d1 *= v[i][j];
        if ((i == 0 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 0)) //a12 a23 a31 +
          d2 *= v[i][j];
        if ((i == 0 && j == 2) || (i == 1 && j == 0) || (i == 2 && j == 1)) //a13 a21 a32 +
          d3 *= v[i][j];
      }
    //determinante recebe o valor da principal e reinicia as diagonais
    a.det = d1 + d2 + d3;
    d1 = 1;
    d2 = 1;
    d3 = 1;
    //diagonal secundaria
    for (int i = 0; i < a.l; i++)
      for (int j = 0; j < a.c; j++)
      {
        if ((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0)) // a13 a22 a31 +
          d1 *= v[i][j];
        if ((i == 0 && j == 0) || (i == 1 && j == 2) || (i == 2 && j == 1)) //a11 a23 a32 +
          d2 *= v[i][j];
        if ((i == 0 && j == 1) || (i == 1 && j == 0) || (i == 2 && j == 2)) //a12 a21 a33 +
          d3 *= v[i][j];
      }
    a.det -= (d1 + d2 + d3);
    //mostra determinante
    printf("%.0f\n", a.det);
  }
}
//faz a multiplicacao entre duas matrizes
void lxc(matriz a, matriz b, matriz c)
{
  float aux=0,mat[b.l][c.c];
  //Processamento e saida em tela  =  PRODUTO DAS MATRIZES
	for(int i = 0; i < b.l; i++) {
		for(int j = 0; j < c.c; j++) {
			
			mat[i][j] = 0;
			for(int x = 0; x < c.l; x++) {
				aux +=  *(*(b.p+i)+x) * *(*(c.p+x)+j);
			}
			mat[i][j] = aux;
			aux = 0;
		}
	}
	
	for(int i = 0; i <b.l; i++) {
		for(int j = 0; j < c.c; j++) {
			printf("%6.f", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");

  //passa a matriz para o ponteiro
  for(int i = 0; i < b.l; i++) 
		for(int j = 0; j < c.c; j++) {
      *(*(a.p+i)+j)=mat[i][j];
    }
}