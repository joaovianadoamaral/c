#include <stdio.h>
#include <string.h>
#include <stdio.h>
//joao vitor 204
//programa para armazenar dados de um ou mais usuario
//jeito certo de mecher com struct
//exemplo de typedef que da um apelido a um tipo 
//como passar struct para a funcao e como retornar

/*é possivel ter uma estrutura dentro de outra exemplo
 struct tipo_endereco
 {
 char rua [50];
 int numero ;
 char bairro [20];
 char cidade [30];
 char sigla_estado [3];
 long int CEP ;
 };
 struct ficha_pessoal
 {
 char nome [50];
 long int telefone ;
 struct tipo_endereco endereco ; // ́avarivel tipo_endereco
 }j;

 a partir de 'j' podemos acessar 'j.endereço' que por sua vez pode acessar
 todas as variaveis da estrutura tipo_endereço usando 'j.endereço.rua'
*/

//ponteiros para struct funcionar como qualquer outro ponteiro
// ex : aluno *p,a; p=&a;
//lembrando dnv typedef de aluno == struct aluno

/* exemplo de ponteiro com alocao 
  struct ficha_pessoal *p;
  int a = 10;

  Alocacao dinamica de 10 fichas pessoais 
  p = (struct ficha_pessoal *) malloc (a * sizeof(struct ficha_pessoal));

  p[0].telefone = 3443768;
  Exemplo de acesso ao campo telefone da primeira ficha apontada por p 
  free(p);
*/

/* usar ponteiro para acessar endereço em struct
  Aten ̧c ̃ao: existem duas formas de se referenciar o ponteiro para estrutura: usando-
  se o operador ponto (.) ou o operador seta − >.

  (*ptr).a  ́e a mesma coisa de ptr->a
  (*ptr).b  ́e a mesma coisa de ptr->b
*/

/* passar uma struct inteira para outra
  struct est1 primeira, segunda;
  Declara primeira e
  segunda como structs do tipo est1 

  primeira.i = 10;
  primeira.f = 3.1415;

  segunda = primeira;
  aqui a segunda copia tudo da primeira, campo por campo
  
  Porem, devemos tomar cuidado na atribui ̧c ̃ao de structs que contenham campos
  ponteiros. 'int *p' na apostila nao se fala pq

*/
/*union
  é feita de forma similar a struct
  assim como é tambem um tipo de dado
  sua forma de acessar os campos é ultilizando o ponto

  elas de fato são muito semelhantes mas a diferença esta na forma
  de alocar memoria
  
  a union aloca memoria para o dado de maior falor
  equanto a struct aloca para todos os campos
*/
/*estrutura tipo bit - fields
 struct
 {
 unsigned int TRUE : 1; aqui temos que a variavel true ocupa 1 bit
 unsigned int FALSE : 1;
 } data2 ;
*/

/* sistema de databit
    #include <stdio.h>
    
    struct
    {
     unsigned int TRUE ;
     unsigned int FALSE ;
    } data1 ;
    
    struct // estrutura tipo bit - fields
    {
     unsigned int TRUE : 1;
     unsigned int FALSE : 1;
    } data2 ;
    
    struct databits
     {
     int b1 : 1; int b2 : 1; int b3 : 1; int b4 : 4;
     int b5 : 9; int b6 : 9; int b7 : 7;
     //int b8 : 1; remover esse comentario para ver a diferença que um bit faz
     } data3 ;
    
    int main ( ){
        printf ( " Memoria ocupada por data1 : %lu bytes \n " ,sizeof ( data1 ) );
        
        printf ( " Memoria ocupada por data2 : %lu bytes \n " ,sizeof ( data2 ) );
        
        printf ( " Memoria ocupada por data3 : %lu bytes \n" ,sizeof ( data3 ) );
    return 0;
    }
*/

/*enumeraçao
  usamos a palavra chave enum
  por padrao começa com 0
  caso se deseje um numero diferente de 0, basta iniciar com outro
  sendo que os proximos serao de incremento 1
  enum meses {JAN=1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};

  confesso que nao entendi muito bem
*/
struct aluno{
  char nome1[50];
  char nome2[50];
  char nome3[50];
  double cpf;
  int nacimento[3];
};
typedef struct aluno aluno;

aluno leitura();
void mostrar();

int main(void) {
  //poderiamos criar se fosse o caso um vetor ou uma matriz de struct
  //exemplo aluno a[50]; lembrando do typedef 'aluno'
  //isso seria o caso para a leitura de 50 dados
  aluno a;
  //leitura dele 
  a=leitura();
  //mostrar dados
  mostrar(a);  
  return 0;
}
aluno leitura(){
  aluno a;
  printf("digite o seu nome : \n");
  setbuf(stdin,NULL);
	fgets(a.nome1,50,stdin);

  printf("digite o nome do seu pai : \n");
  setbuf(stdin,NULL);
	fgets(a.nome2,50,stdin);

  printf("digite o nome da sua mae : \n");
  setbuf(stdin,NULL);
	fgets(a.nome3,50,stdin);

  printf("digite o seu cpf : \n");
  scanf("%lf",&a.cpf);
  printf("sobre seu aniversario,digite dando espaço(dia mes ano):\n");
  scanf("%d",&a.nacimento[0]);
  scanf("%d",&a.nacimento[1]);
  scanf("%d",&a.nacimento[2]);
  return a;
}
void mostrar(aluno a){
  printf("\n\n");
  for(int i=0;i<30;i++){
    printf("*");
  }
  printf("\nseus dados: \n");
  printf("o seu nome : %s\n",a.nome1);

  printf("o nome do seu pai: %s\n",a.nome2);

  printf("o nome da sua mae: %s\n",a.nome3);

  printf("o seu cpf : %.0f\n",a.cpf);

  printf("seu aniversario : %d/%d/%d\n",a.nacimento[0],a.nacimento[1],a.nacimento[2]);
}