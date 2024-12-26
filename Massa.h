//Código desenvolvido por Andressa Sousa Fonseca

#include <stdio.h>
#include <locale.h>

void converterMassa(){
	
	int op=1; //op armazena a opção escolhida pelo usuário
	float valor, calculo; //valor armazena o valor desejado pelo usuário para conversão e calculo armazenada o resultado da operação de conversão
	
	//Permitir acentuação
	setlocale(LC_ALL, "pt_BR.UTF-8");

		//Loop para permitir que o usuário escolha mais de um aopção até que deseje sair
	while(op!=0){
	
	printf("\n\t\tMENU\n");
	printf("\t1 - Converter de quilogramas para gramas\n\t2 - Converter de gramas para quilogramas\n\t3 - Converter de toneladas para quilogramas\n\t4 - Converter de quilogramas para toneladas\n\t0 - Sair\n");
	printf("Digite o número da opção desejada: ");
	scanf("%d", &op);
	
	
	switch(op){
		case 1: 
			//Conversão de quilogramas para gramas
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor*1000;
			printf("\n\t%.2f quilograma(s) equivale(m) a %.2f grama(s)\n",valor, calculo);
			break;
		case 2:
			//Conversão de gramas para quilogramas
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor/1000;
			printf("\n\t%.2f grama(s) equivale(m) a %.2f quilograma(s)\n",valor, calculo);
			break;
		case 3:
			//Conversão de toneladas para quilogramas
			printf("\n\tDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor*1000;
			printf("\n\t%.2f tonelada(s) equivale(m) a %.2f quilograma(s)\n",valor, calculo);
			break;
		case 4:
			//Conversão de quilogramas para toneladas
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor/1000;
			printf("\n\t%.2f quilograma(s) equivale(m) a %.2f tonelada(s)\n",valor, calculo);
			break;
		case 0:
			break;
		default:
			printf("\n\tOpção inexistente\n");
			break;
	}

		//Dá ao usuário a possibilidade de voltar ou não ao menu
        if(op!=0){
    	    printf("\nDeseja continuar em conversão de massa?\n\t1 - SIM\n\t0 - NÃO\n");
    	    scanf("%d",&op);
        }

	}
	printf("Saindo de conversão de massa");
}