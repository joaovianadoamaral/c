void sec1(void){
    //criação de menu para chamar os exercicios.
    int opc=1,inteiro;
    float finteiro;

    while(opc!=0){
        
        printf("digite qual a questao desejada(1 a 10) e 0 para sair: \n");
        scanf("%d",&opc);
        switch(opc){
            
            //faz o exercicio 1
            case 1: 
                printf("\n======================================\n");
                //enunciado
                printf("1. Faca um programa C para imprimir a mensagem 'Hello World!'\n");
                //exercicio
                printf("hello world \n");
                 
                printf("\n======================================\n");
                continue;//para voltar para o menu
            
            //
            case 2:
                printf("\n======================================\n");
               
                //enunciado
                printf("2. Faca um programa C para ler um inteiro e mostra-lo\n");
                //exercicio
                printf("digite um numero inteiro: \n");
                scanf("%f",&finteiro);
                inteiro=finteiro;
                if(finteiro==inteiro){
                    printf("o numero inteiro digitado foi: %d",inteiro);
                }
                else{
                    printf("nao foi digitado um numero inteiro.\n");
                }

                printf("\n======================================\n");
                
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