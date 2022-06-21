void sec1(void){
    //criação de menu para chamar os exercicios.
    int opc=1,inteiro,inteiro2;
    float finteiro,rdivisao,expo,num1,num2;
    char caracter,P_nome[15],C_nome[100];
    while(opc!=0){
        
        printf("digite qual a questao desejada(1 a 12) e 0 para sair: \n");
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
                continue;
            //faz o exercicio 7
            case 7: 
                printf("\n======================================\n");
                
                //enunciado
                printf("7. Faca um programa C para ler dois inteiros e mostrar o resultado da divisao real (float).\nMostre o resultado e os dois numeros lidos assim: ”x/y = z”, sendo x e y os numeroslidos e z o resultado da divisao real (float).\n");
                //exercicio
                printf("digite o primeiro numero inteiro: \n");
                scanf("%d",&inteiro);
                printf("digite o segundo numero inteiro: \n");
                scanf("%d",&inteiro2);
                rdivisao=inteiro/inteiro2;
                printf("a divisão real de %d/%d=%f\n",inteiro,inteiro2,rdivisao);
                
                printf("\n======================================\n");
                

                continue;
            //faz o exercicio 8
            case 8:
                printf("\n======================================\n");

                //enunciado
                printf("8. Faca um programa em C para ler um caractere, mostra-lo e mostrar seu codigo ASCII.\n");

                //exercicio
                printf("Digite um caractere apenas: \n");
                setbuf(stdin,NULL);//para que não leia o caractere \n ou espaço automaticamente
                scanf("%c",&caracter);
                printf("o caractere digitado foi :'%c' e seu codigo ASCII E '%d'",caracter,caracter);
                
                printf("\n======================================\n");

                continue;
            //faz o exercicio 9
            case 9:
                printf("\n======================================\n");

                //enunciado
                printf("9. Faca um programa em C para ler um nome do usuario (primeiro nome apenas, uma palavra, sem espacos) e mostra-lo\n");
                
                //exercicio
                printf("Digite o seu primeiro nome : \n");
                setbuf(stdin,NULL);//para que não leia o caractere \n ou espaço automaticamente
                scanf("%s",&P_nome);
                printf("o seu primeiro nome e : %s\n",P_nome);

                printf("\n======================================\n");
                continue;
            //faz o exercicio 10
            case 10:
                printf("\n======================================\n");

                //enunciado
                printf("10. Faca um programa em C para ler o nome completo do usuario (com espacos) e mostralo.\n");
                
                //exercicio
                printf("Digite o seu nome completo : \n");
                setbuf(stdin,NULL);//para que não leia o caractere \n ou espaço automaticamente
                //para ler uma frase usaremos o comando fgets()
                fgets(C_nome,100,stdin);
                printf("o seu nome completo e : %s\n",C_nome);

                printf("\n======================================\n");
                continue;
            //faz o exercicio 11
            case 11:
                printf("\n======================================\n");

                //enunciado
                printf("11. Faca um programa em C para ler e mostrar 4 variaveis: um inteiro, um caractere, um numero real (float) e uma string (palavra unica, sem espacos).\nOs dados lidos devem ser apresentados como mostrado abaixo (sendo X,Y,Z,S os dados lidos):\n");
                //exercicio
                printf("Digite um inteiro: \n");
                scanf("%d",&inteiro);
                printf("Digite um caracter: \n");
                setbuf(stdin,NULL);//para que não leia o caractere \n ou espaço automaticamente
                scanf("%c",&caracter);
                printf("Digite um numero real: \n");
                scanf("%f",&finteiro);
                printf("Digite uma string: \n");
                setbuf(stdin,NULL);//para que não leia o caractere \n ou espaço automaticamente
                fgets(C_nome,100,stdin);
                printf("\n Inteiro: %d",inteiro);
                printf("\n caracter: %c",caracter);
                printf("\n float: %f",finteiro);
                printf("\n string: %s",C_nome);

                printf("\n======================================\n");

                continue;
            //faz o exercicio 12
            case 12:
                printf("\n======================================\n");

                //enunciado
                printf("12. Faca um programa em C para ler dois numeros (x e y) e mostrar o resultado da potencia do primeiro elevado ao segundo, isto e z = x^y.\n");
                //exercicio
                printf("digite o numero x: \n");
                scanf("%f",&num1);
                printf("digite o numero y: \n");
                scanf("%f",&num2);
                expo=pow(num1,num2);
                printf("isto e %.2f = %.2f^%.2f\n",expo,num1,num2);
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