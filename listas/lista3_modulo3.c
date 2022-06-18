#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex.h>

void menu();


//questao 1)
  struct endereco{
    //cidade,bairro,rua,numero
    char cidade[50];
    char bairro[50];
    char rua[50];
    int numero ;
  };
  typedef struct endereco endereco;

  struct dados_escolares{
    //(numero de matricula, escola anterior, s ́erie matriculada)
    double nmat;
    
    char escola[50];
    
    int serie;
  };
  typedef struct dados_escolares dados;

  //dados pessoais + chamada para escolares+ endereco
  struct aluno{
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
  
  struct complexo{
    float real,imag;
  };

  typedef struct complexo complexo;
//questao 3
  struct ponto{
    int x,y;
  }p1,p2,p3;

  typedef struct ponto ponto;

  ponto read();
  void distancia();
//funcao main
  int main(void) {
    menu();
    return 0;
  }
//menu do programa e onde chama cada questao
  void menu(){
    //q1)
    aluno a;
    int opcao=1;
    printf("Joao vitor viana, 204\n");
    
    while(opcao){
      //responsavel por armazernar a opcao desejada do usuario a cada loop
      //corpo do menu
        printf("******************************\n");
        printf("digite o numero da questao desejada: \n");
        printf("(1)questao 1\n(2)questao 2\n(3)questao 3\n(4)questao 4\n(5)questao 5\n(0)sair\n");
        scanf("%d",&opcao);
      //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
        switch (opcao){
        //questao (1)
          case 1:
            a=leitura();
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
              p1=read(1);
              p2=read(2);
            //chamar funcao que mostra a distancia entre os dois pontos
              distancia(p1,p2,p3);
            continue;
        //questao (4)
          case 4:
            continue;
        //quetao (5)
          case 5:
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
  aluno leitura(){
    aluno a;
    //leitura dos dados pessoais
      printf("digite o nome do aluno : \n");
      setbuf(stdin,NULL);
      fgets(a.nome1,50,stdin);

      printf("digite o nome do pai do aluno : \n");
      setbuf(stdin,NULL);
      fgets(a.nome2,50,stdin);

      printf("digite o nome da mae do aluno : \n");
      setbuf(stdin,NULL);
      fgets(a.nome3,50,stdin);

      printf("digite o cpf do aluno : \n");
      scanf("%lf",&a.cpf);
      printf("sobre o aniversario do aluno,digite dando espaço(dia mes ano):\n");
      scanf("%d",&a.nacimento[0]);
      scanf("%d",&a.nacimento[1]);
      scanf("%d",&a.nacimento[2]);

    //leitura dos dados escolares
      printf("digite numero de matricula : \n");
      scanf("%lf",&a.d.nmat);

      printf("digite o nome da escola anterior: \n");
      setbuf(stdin,NULL);
      fgets(a.d.escola,50,stdin);

      printf("a serie matriculada: (1 a 9)fundamental (11 a 13) medio:\n");
      scanf("%d",&a.d.serie);
    //leitura de endereço
      printf("Digite cidade do aluno: \n");
      setbuf(stdin,NULL);
      fgets(a.e.cidade,50,stdin);

      printf("Digite bairro do aluno: \n");
      setbuf(stdin,NULL);
      fgets(a.e.bairro,50,stdin);

      printf("Digite a rua do aluno: \n");
      setbuf(stdin,NULL);
      fgets(a.e.rua,50,stdin);

      setbuf(stdin,NULL);
      printf("Digite o numero do aluno: \n");
      scanf("%d",&a.e.numero);
    return a;
  }
  void mostrar(aluno a){
    //corpo para mostrar os dados e facil visualizacao
      printf("\n");
      for(int i=0;i<30;i++){
        printf("*");
      }
    //mostrar dados pessoais
      printf("\ndados do aluno\n");

      printf("nome : %s\n",a.nome1);

      printf("o nome do pai: %s\n",a.nome2);

      printf("o nome da mae: %s\n",a.nome3);

      printf("o cpf : %.0f\n\n",a.cpf);

      printf("aniversario : %d/%d/%d\n\n",a.nacimento[0],a.nacimento[1],a.nacimento[2]);
    //mostrar dados escolares
      printf("matricula : %.0lf\n\n",a.d.nmat);

      printf("escola anterior: %s \n",a.d.escola);

      printf("a serie matriculada: (1 a 9)fundamental (11 a 13) medio: %d\n\n",a.d.serie);
    //mostrar endereço
      printf("endereço do aluno :\n");
      printf("%s%s%s%d\n",a.e.cidade,a.e.bairro,a.e.rua,a.e.numero);
    //corpo para mostrar os dados e facil visualizacao
      printf("\n");
      for(int i=0;i<30;i++){
        printf("*");
      }
      printf("\n");
  }
//funcoes para a questao 2)
  //menu para as operaçoes
    void menu2(){
      complexo a,b,c;
      int opcao=1;
      while(opcao){
        //responsavel por armazernar a opcao desejada do usuario a cada loop
        printf("******************************\n");
        printf("digite a operacao com numero complexo desejada: \n");
        printf("(1)soma\n(2)multiplicacao\n(3)modulo\n(0)sair da questao\n");
        scanf("%d",&opcao);

        switch (opcao){
        //aqui sao feitos os programas a partir da escolha do usuario e mantem um loop
        //soma 
          case 1:
            for(int i=0;i<10;i++)
              printf("*");
            printf("\nsoma\n");
            printf("dado y1=a1+b1*i e y2=a2+b2*i\n");

            printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
            scanf("%f%f",&a.real,&a.imag);

            printf("Digite a2(parte real) e b2 (parte imaginaria ) : \n");
            scanf("%f%f",&b.real,&b.imag);

            c.real=a.real + b.real;
            c.imag=a.imag +  b.imag;

            if(c.imag >= 0)
              printf("A soma de y1 + y2= %.2f +%.2f i\n",c.real,c.imag);   
            else 
              printf("A soma de y1 + y2= %.2f %.2f i\n",c.real,c.imag);
            printf("\n");
          continue;
        //multiplicacao
          case 2:
            for(int i=0;i<10;i++)
              printf("*");
            printf("\nmultiplicacao\n");
            printf("dado y1=a1+b1*i e y2=a2+b2*i\n");

            printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
            scanf("%f%f",&a.real,&a.imag);
            
            printf("Digite a2(parte real) e b2 (parte imaginaria ) : \n");
            scanf("%f%f",&b.real,&b.imag);

            c.real=a.real*b.real+(a.imag*b.imag*-1);
            c.imag=a.real*b.imag+a.imag*b.real;

            if(c.imag >= 0)
              printf("A multiplicacao de y1 * y2= %.2f +%.2f i\n",c.real,c.imag);   
            else 
              printf("A multiplicacao de y1 * y2= %.2f %.2f i\n",c.real,c.imag);
            printf("\n");
            continue;
        //modulo
          case 3:
           for(int i=0;i<10;i++)
              printf("*");
            printf("\nmodulo\n");
            printf("dado y1=a1+b1*i\n");

            printf("Digite a1(parte real) e b1 (parte imaginaria ) : \n");
            scanf("%f%f",&a.real,&a.imag);

            c.real=pow(a.real,2)+pow(a.imag,2);
            c.imag=sqrt(c.real);

            printf("o modulo de y1= %.2f\n",c.imag);
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
    ponto read(int n){
      ponto p;

      printf("Digite as cordenadas x e y do ponto %d: \n",n);
      scanf("%d%d",&p.x,&p.y);

      return (p);
    }
  //funcao para distancia
    void distancia(ponto p1,ponto p2,ponto p3){
      float distancia;
      //p3 recebe o modulo da distancia de x
        if(p1.x>=p2.x)
          p3.x=p1.x-p2.x;
        else
          p3.x=p2.x-p1.x;
      //p3 recebe o modulo da distancia de y
        if(p1.y>=p2.x)
          p3.y=p1.y-p2.y;
        else
          p3.y=p2.y-p1.y;
      //mostra a distancia
        distancia=pow(p3.x,2)+pow(p3.y,2);
        distancia=sqrt(distancia);
        printf("distancia entre dois pontos : %f\n",distancia);
    }
//funcoes para a questao 4)
  
//funcoes para a questao 5)
