//Código desenvolvido por Andressa Sousa Fonseca

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void converterMassa(){
	
	int op=1; //op armazena a opção escolhida pelo usuário
	float valor, calculo; //valor armazena o valor desejado pelo usuário para conversão e calculo armazenada o resultado da operação de conversão
	
	//Permitir acentuação
	setlocale(LC_ALL, "pt_BR.UTF-8");

		//Loop para permitir que o usuário escolha mais de um opção até que deseje sair
	while(op!=0){
	
    	printf("\n\t Conversão de Massa\n");
    	printf("1. Converter de toneladas para quilogramas\n2. Converter de quilogramas para toneladas\n3. Converter de quilogramas para gramas\n4. Converter de gramas para quilogramas\n5. Converter de gramas para miligramas\n6. Converter de miligramas para gramas\n0 - Sair\n");
    	printf("Digite o número da opção desejada (1-6): ");
    	scanf("%d", &op);
    	system("clear");
    	
    	switch(op){
    	    case 1:
    			//Conversão de toneladas para quilogramas
    			printf("\n\tDigite o valor em toneladas: ");
    			scanf("%f", &valor);
    			calculo=valor*1000;
    			printf("\n\t%.2f Tonelada(s) = %.2f Quilograma(s)\n",valor, calculo);
    			break;
    		case 2:
    			//Conversão de quilogramas para toneladas
    			printf("\n\tDigite o valor em quilogramas: ");
    			scanf("%f", &valor);
    			calculo=valor/1000.0;
    			printf("\n\t%.2f Quilograma(s) = %.2f Tonelada(s)\n",valor, calculo);
    			break;
    		case 3: 
    			//Conversão de quilogramas para gramas
    			printf("\n\tDigite o valor em quilogramas: ");
    			scanf("%f", &valor);
    			calculo=valor*1000.0;
    			printf("\n\t%.2f Quilograma(s) = %.2f Grama(s)\n",valor, calculo);
    			break;
    		case 4:
    			//Conversão de gramas para quilogramas
    			printf("\n\tDigite o valor em gramas: ");
    			scanf("%f", &valor);
    			calculo=valor/1000.0;
    			printf("\n\t%.2f Grama(s) = %.2f Quilograma(s)\n",valor, calculo);
    			break;
    		case 5:
    		    //Conversão de gramas para miligramas
    			printf("\n\tDigite o valor em gramas: ");
    			scanf("%f", &valor);
    			calculo=valor*1000.0;
    			printf("\n\t%.2f Grama(s) = %.2f Miligrama(s)\n",valor, calculo);
    			break;
    		case 6:
    		    //Conversão de miligramas para gramas 
    			printf("\n\tDigite o valor miligramas: ");
    			scanf("%f", &valor);
    			calculo=valor/1000.0;
    			printf("\n\t%.2f Miligrama(s) = %.2f Grama(s)\n",valor, calculo);
    		    break;    
    		case 0:
    			break;
    		default:
    			printf("\n\tOpção inexistente\n");
    			break;
    	}
    	if(op!=0){
        	printf("\nDeseja continuar em conversão de massa? Se não, digite 0 para sair.\t");
        	scanf("%d", &op);
    	}
    	
	}
}