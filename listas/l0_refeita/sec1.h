void sec1(void){
    //criação de menu para chamar as secções.
    opc=1;

    while(opc!=0){
        printf("digite qual a questão desejada\n");
        scanf("%d",&opc);
        switch(opc){
            //faz o exercicio 1
            case 1:
                
                continue;//para voltar para o menu
            //sai do loop
            case 0:
                print("voltando para o menu principal de seccoes...\n");
                break;
        }
    }
}