void sec6(void){
    //criação de menu para chamar os exercicios.
    int opc=1,inteiro,aux;
    float fint;
    while(opc!=0){
        
        printf("digite qual a questao desejada(13 a 24) e 0 para sair: \n");
        scanf("%d",&opc);
        switch(opc){
            //faz o exercicio 50
            case 50: 
                printf("\n======================================\n");
                
                //enunciado
                printf("");
                //exercicio
                printf("digite o numero n inteiro positivo: \n");
                scanf("%f",&fint);
                inteiro=fint;
                aux=0;//faz com que o primeiro numero comece menor a cada linha
                if(inteiro==fint && inteiro>0){
                    //numero de linhas
                    for(int i=0; i<inteiro; i++){
                        //formato das colunas
                        for(int j=inteiro-aux; j>0;j--) {
                            printf("%d ",j);
                        }
                        aux++;
                        printf("\n");
                    }
                }
                else{
                    printf("numero digitado invalido. \n");
                }
                printf("\n======================================\n");
                continue;
            //faz o exercicicio 51
            case 51:        
                printf("\n======================================\n");
                
                 //enunciado
                printf("");
                //exercicio
                printf("digite o numero n inteiro positivo: \n");
                scanf("%d",&inteiro);
                aux=inteiro-1;
                if(inteiro>0){
                    //numero de linhas
                    for(int i=0; i<inteiro; i++){
                        //formato das colunas
                        for(int j=0; j<inteiro-aux;j++) {
                            printf("*");
                        }
                        aux--;
                        printf("\n");
                    }
                }
                else{
                    printf("numero digitado invalido. \n");
                }
                
                printf("\n======================================\n"); 
                continue;
            //faz o exercicio 15
            case 15:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 16
            case 16:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 17
            case 17:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 18
            case 18:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 19
            case 19: 
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 20
            case 20:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 21
            case 21:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 22
            case 22:
               printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 23
            case 23:
               printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 24
            case 24:
                printf("\n======================================\n");
                
                //enunciado

                //exercicio
                
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