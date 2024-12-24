#ifndef VELOCIDADE_H  
#define VELOCIDADE_H  

#include <stdio.h>  

void converterVelocidade() {
    int opcao;       
    float velocidade;
    float resultado; 

    printf("\n--- Conversão de Velocidades ---\n"); 
    printf("1. km/h para m/s\n");                   
    printf("2. m/s para km/h\n");                   
    printf("3. km/h para mph\n");                   
    printf("4. mph para km/h\n");                   
    printf("5. m/s para mph\n");                    
    printf("6. mph para m/s\n");                    
    printf("Digite sua escolha (1-6): ");           
    scanf("%d", &opcao);                           
    
    switch (opcao) {
        case 1: // km/h para m/s
            printf("Digite a velocidade em km/h: ");
            scanf("%f", &velocidade);
            resultado = velocidade / 3.6;
            printf("%.2f km/h = %.2f m/s\n", velocidade, resultado);
            break;
        case 2: // m/s para km/h
            printf("Digite a velocidade em m/s: ");
            scanf("%f", &velocidade);
            resultado = velocidade * 3.6;
            printf("%.2f m/s = %.2f km/h\n", velocidade, resultado);
            break;
        case 3: // km/h para mph
            printf("Digite a velocidade em km/h: ");
            scanf("%f", &velocidade);
            resultado = velocidade / 1.609;
            printf("%.2f km/h = %.2f mph\n", velocidade, resultado);
            break;
        case 4: // mph para km/h
            printf("Digite a velocidade em mph: ");
            scanf("%f", &velocidade);
            resultado = velocidade * 1.609;
            printf("%.2f mph = %.2f km/h\n", velocidade, resultado);
            break;
        case 5: // m/s para mph
            printf("Digite a velocidade em m/s: ");
            scanf("%f", &velocidade);
            resultado = velocidade * 2.237;
            printf("%.2f m/s = %.2f mph\n", velocidade, resultado);
            break;
        case 6: // mph para m/s
            printf("Digite a velocidade em mph: ");
            scanf("%f", &velocidade);
            resultado = velocidade / 2.237;
            printf("%.2f mph = %.2f m/s\n", velocidade, resultado);
            break;
        default: // Caso inválido
            printf("Opção inválida!\n");
            break;
    }
}