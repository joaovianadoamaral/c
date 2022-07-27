void sec5(void){
    //criação de menu para chamar os exercicios.
    int opc=1,n,cont;
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
                    printf("numero 'n' digitado invalido. \n");
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
                    printf("numero 'n' digitado invalido. \n");
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
                    printf("numero 'n' digitado invalido. \n");
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
                    printf("numero 'n' digitado invalido. \n");
                }
                printf("\n======================================\n");
            
                continue;
            //faz o exercicio 46
            case 46:
                printf("\n======================================\n");
                
                //enunciado
                printf("46. Faca um programa em C para gerar um triangulo retangulo, formado de asteriscos, de catetos de tamanho N (N asteriscos),\nou seja N linhas e primeira linha de N asteriscos, segunda linha de N-1 asteriscos, etc.\nO valor de 3 ≤ N ≤ 15 e dado pelo usuario. A figura abaixo mostra o caso de N = 5.\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=3&&n<=15){
                    for(int i=n;i>0;i--){
                        for(int j=0;j<i;j++){
                            printf("* ");
                        }   
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digitado invalido. \n");
                }
                
                printf("\n======================================\n");
                continue;
            //faz o exercicio 47
            case 47:
                printf("\n======================================\n");
                
                //enunciado
                printf("47. Faca um programa em C para gerar um triangulo retangulo formado de asteriscos, de catetos de tamanho N (N asteriscos),\nou seja N linhas e primeira linha com 1 asterisco, segunda linha 2 asteriscos, ate a ultima linha de N asteriscos.\nO valor de 3 <= N <= 15 e dado pelo usuario. A figura abaixo mostra o caso de N = 5\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                cont=1;
                if(n>=3&&n<=15){
                    for(int i=n;i>0;i--){
                        for(int j=0 ;j<cont;j++){
                            printf("* ");
                        }   
                        cont++;
                        printf("\n");
                    }
                }
                else{
                    printf("numero 'n' digitado invalido. \n");
                }
                printf("\n======================================\n");
                continue;
            //faz o exercicio 48
            case 48: 
                printf("\n======================================\n");
                
                //enunciado
                printf("48. Faca um programa em C para gerar um triangulo de numeros, de N linhas, com linhas de numeros crescentes,\na partir de 1 ate N na primeira linha, de 1 ate N -1 na segunda, e assim por diante, ate a ultima linha com apenas o numero 1.\nA figura abaixo mostra o caso de N = 5. Considere 2 ≤ N ≤ 9.\n");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=2 && n<=9){
                    cont=0;
                    for(int i=0; i<n;i++){
                    for(int j=1; j<=(n-cont);j++){
                        printf("%d ",j);
                        }   
                        printf("\n");
                        cont++;
                    }
                }
                else{
                     printf("numero 'n' digitado invalido. \n");
                }
                printf("\n======================================\n");
                continue;
            //faz o exercicio 49
            case 49:
                printf("\n======================================\n");
                
                //enunciado
                printf("49. Faca um programa em C para gerar um triangulo de numeros, de N linhas, com linhas de numeros decrescentes,\na partir de N ate 1 na primeira linha, de N ate 2 na segunda, e assim por diant,\nate a ultima linha com apenas o numero igual N.\nA figura abaixo mostra o caso de N = 5. Considere 2 ≤ N ≤ 9.");
                //exercicio
                printf("digite o numero n: \n");
                scanf("%d",&n);
                if(n>=2 && n<=9){
                    cont=0;
                    for(int i=0; i<n;i++){
                    for(int j=n; j>(0+cont);j--){
                        printf("%d ",j);
                        }   
                        printf("\n");
                        cont++;
                    }
                }
                else{
                     printf("numero 'n' digitado invalido. \n");
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