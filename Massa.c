//Código desenvolvido por Andressa Sousa Fonseca

#include <stdio.h>

void ConverterMassa(){
	
	int op=1; //op armazena a opção escolhida pelo usuário e valor armazena o valor desejado pelo usuário para conversão
	float valor, calculo; //valor armazena o valor desejado pelo usuário para conversão e calculo armazenada o resultado da operção de conversão
	
	while(op!=0){
	printf("\n\t\tMENU\n");
	printf("\t1 - Converter de quilogramas para gramas\n\t2 - Converter de gramas para quilogramas\n\t3 - Converter de toneladas para quilogramas\n\t4 - Converter de quilogramas para toneladas\n\t0 - Sair\n");
	printf("Digite o numero da opcao desejada: ");
	scanf("%d", &op);
	
	
	
	
	switch(op){
		case 1:
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor*1000;
			printf("%.2f quilograma(s) equivale a %.2f grama(s)",valor, calculo);
			printf("\nDeseja continuar em conversao de massa?\n\t1 - SIM\n\t0 - NAO\n");
			scanf("%d",&op);
			break;
		case 2:
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor/1000;
			printf("%.2f grama(s) equivale a %.2f quilograma(s)",valor, calculo);
			printf("\nDeseja continuar em conversao de massa?\n\t1 - SIM\n\t0 - NAO\n");
			scanf("%d",&op);
			break;
		case 3:
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor*1000;
			printf("%.2f tonelada(s) equivale a %.2f quilograma(s)",valor, calculo);
			printf("\nDeseja continuar em conversao de massa?\n\t1 - SIM\n\t0 - NAO\n");
			scanf("%d",&op);
			break;
		case 4:
			printf("\nDigite o valor que desejar converter: ");
			scanf("%f", &valor);
			calculo=valor/1000;
			printf("%.2f quilograma(s) equivale a %.2f tonelada(s)",valor, calculo);
			printf("\nDeseja continuar em conversao de massa?\n\t1 - SIM\n\t0 - NAO\n");
			scanf("%d",&op);
			break;
		default:
			printf("Opcao inexistente");
			printf("\nDeseja continuar em conversao de massa?\n\t1 - SIM\n\t0 - NAO\n");
			scanf("%d",&op);
			break;
	}
	
	}
}