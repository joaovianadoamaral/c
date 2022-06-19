void sec1(void){
    //criação de menu para chamar os exercicios.
    int opc=1,inteiro,inteiro2;
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
            
            //faz o exercicicio 2
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

            //faz o exercicio 3
            case 3:
                printf("\n======================================\n");

                //enunciado
                printf("3. Faca um programa C para ler um inteiro e mostra-lo com a frase: 'Inteiro Digitado: X, sendo X o valor dado.'\n");
                //exercicio
                printf("digite um numero inteiro: \n");
                scanf("%f",&finteiro);
                inteiro=finteiro;
                if(finteiro==inteiro){
                    printf("inteiro digitado : %d",inteiro);
                }
                else{
                    printf("nao foi digitado um numero inteiro.\n");
                }

                printf("\n======================================\n");
                continue;
            
            //faz o exercicio 4
            case 4:
                printf("\n======================================\n");
                
                //enunciado
                printf("4. Faca um programa C para ler dois inteiros, soma-los e mostrar o resultado\n");
                //exercicio
                printf("digite o primeiro numero inteiro: \n");
                scanf("%d",&inteiro);
                printf("digite o segundo numero inteiro: \n");
                scanf("%d",&inteiro2);

                printf("a soma dos inteiros digitados e : %d\n",inteiro+inteiro2);
                
                printf("\n======================================\n");

                continue;
                
            //faz o exercicio 5
            case 5:
                printf("\n======================================\n");
                
                //enunciado
                printf("5. Faca um programa C para ler dois inteiros, soma-los e mostrar os dois numeros lidos e o resultado na frase: 'A soma de X com Y = Z', sendo X,Y os numeros lidos e Z = X +Y.\n");
                //exercicio
                printf("digite o primeiro numero inteiro: \n");
                scanf("%d",&inteiro);
                printf("digite o segundo numero inteiro: \n");
                scanf("%d",&inteiro2);

                printf("a soma de %d com %d e : %d\n",inteiro,inteiro2,inteiro+inteiro2);
                
                printf("\n======================================\n");
                continue;
                
            //faz o exercicio 6
            case 6:
                printf("\n======================================\n");
                
                //enunciado
                printf("6. Faca um programa C para ler dois inteiros e mostrar o resultado do resto da divisao inteira primeiro e o segundo numero lidos.\n");
                //exercicio
                printf("digite o primeiro numero inteiro: \n");
                scanf("%d",&inteiro);
                printf("digite o segundo numero inteiro: \n");
                scanf("%d",&inteiro2);

                printf("o resto da divisao inteira de %d por %d: %d\n",inteiro,inteiro2,inteiro % inteiro2);
                printf("\n======================================\n");
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