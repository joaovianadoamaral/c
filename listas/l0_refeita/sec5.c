void sec5(void){
    //criação de menu para chamar os exercicios.
    int opc=1,n;
    while(opc!=0){
        
        printf("digite qual a questao desejada(42 a 49) e 0 para sair: \n");
        scanf("%d",&opc);
        switch(opc){
            //faz o exercicio 42
            case 42: 
                printf("\n======================================\n");
                
                //enunciado
                printf("42. Faca um programa em C para gerar um quadrado de lado N formado de asteriscos. O valor de 3 <= N <= 15 e dado pelo usuario. A figura abaixo mostra o caso de N = 5.\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=3&&n<=15){
                    for(int i=0;i<n;i++){
                        for(int i=0;i<n;i++){
                            printf("* ");
                        }   
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digita invalido. \n");
                }
                printf("\n======================================\n");
                continue;
            //faz o exercicicio 43
            case 43:        
                printf("\n======================================\n");
                
                //enunciado
                printf("42. Faca um programa em C para gerar um quadrado de lado N formado de asteriscos. O valor de 3 <= N <= 15 e dado pelo usuario. A figura abaixo mostra o caso de N = 5.\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=3&&n<=15){
                    for(int i=0;i<n;i++){
                        for(int i=0;i<n;i++){
                            printf("%d ",n);
                        }   
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digita invalido. \n");
                }
                
                printf("\n======================================\n"); 
                continue;
            //faz o exercicio 44
            case 44:
                printf("\n======================================\n");
                
                //enunciado
                printf("44. Faca um programa em C para gerar um quadrado de lado N,\nisto e, N linhas, com linhas que vao de 1 a N. O valor de 3 ≤ N ≤ 15 e dado pelo usuario.\nA figura abaixo mostra o caso de N = 5.\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=3&&n<=15){
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            printf("%d ",j+1);
                        }   
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digita invalido. \n");
                }
                printf("\n======================================\n");
                continue;
            //faz o exercicio 45
            case 45:
                printf("\n======================================\n");
            
                //enunciado
                printf("45. Faca um programa em C para gerar um quadrado de lado N, isto e, N linhas,\ncom linhas que vao de N a 1. O valor de 3 ≤ N ≤ 15 e dado pelo usuario.\nA figura abaixo mostra o caso de N = 5\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=3&&n<=15){
                    for(int i=0;i<n;i++){
                        for(int j=n;j>0;j--){
                            printf("%d ",j);
                        }   
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digita invalido. \n");
                }
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