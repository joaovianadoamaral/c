void sec2(void){
    //criação de menu para chamar os exercicios.
    int opc=1;
    while(opc!=0){
        
        printf("digite qual a questao desejada(13 a 24) e 0 para sair: \n");
        scanf("%d",&opc);
        switch(opc){
            //faz o exercicio 13
            case 13: 
                continue;
            //faz o exercicicio 14
            case 14:         
                continue;
            //faz o exercicio 15
            case 15:
                continue;
            //faz o exercicio 16
            case 16:
                continue;
            //faz o exercicio 17
            case 17:
                continue;
            //faz o exercicio 18
            case 18:
                continue;
            //faz o exercicio 19
            case 19: 
                continue;
            //faz o exercicio 20
            case 20:
                continue;
            //faz o exercicio 21
            case 21:
                continue;
            //faz o exercicio 22
            case 22:
                continue;
            //faz o exercicio 23
            case 23:
                continue;
            //faz o exercicio 24
            case 24:
                continue;
            //sai do loop
            case 0:

                printf("voltando para o menu principal de seccoes...\n");
                printf("\n======================================\n");
                break;
            default:
                printf("Nao existe a opcao desejada: \n");
        }
    }
    
}