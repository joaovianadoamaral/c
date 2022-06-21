#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//declaração das funções presentes nas seccoes
#include "sec1.c"
#include "sec2.c"
#include "sec3.c"
#include "sec4.c"
#include "sec5.c"
#include "sec6.c"
#include "sec7.c"
#include "sec8.c"
#include "sec9.c"
#include "sec10.c"
#include "sec11.c"
#include "sec12.c"
//100 problemas de c.
//fazer 1 seccao por semana 

int main(void){
    //criação das variaveis
    int opc;

    printf("=======lista 0 refeita========\n");

    //criação de menu para chamar as secções.
    opc=1;

    while(opc!=0){
        printf("digite qual a seccao desejada(1 a 13) e 0 para encerrar \n");
        scanf("%d",&opc);
        switch(opc){
            //faz a secção 1
            case 1:
                sec1();
                continue;//para voltar para o menu
            //faz a secção 2
            case 2:
                sec2();
                continue;//para voltar para o menu
            //sai do loop
            case 0:
                printf("\nencerrando...\n");
                printf("\n======================================\n");
                break;
            default:
                printf("Nao existe a opcao desejada: \n");
        }
    }

    return(0);
}
