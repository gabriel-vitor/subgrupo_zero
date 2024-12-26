// Código desenvolvido pelo aluno: Lucas Carneiro de Araújo Lima.
#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <stdio.h>

#define KELVIN_OFFSET 273.15

float* conversorTemperaturas(int opcao, float temperatura) {
    static float valores_convertidos[3] = {0, 0, 0};
    switch (opcao) {
        case 7: // Celsius para Kelvin, Fahrenheit e Kelvin
            valores_convertidos[0] = temperatura; // Celsius
            valores_convertidos[1] = (temperatura * 9.0 / 5.0) + 32.0; // Fahrenheit
            valores_convertidos[2] = temperatura + KELVIN_OFFSET; // Kelvin
            break;
        case 8: // Fahrenheit para Celsius, Kelvin e Celsius
            valores_convertidos[0] = (temperatura - 32.0) * 5.0 / 9.0; // Celsius
            valores_convertidos[1] = temperatura; // Fahrenheit
            valores_convertidos[2] = ((temperatura - 32.0) * 5.0 / 9.0) + KELVIN_OFFSET; // Kelvin
            break;
        case 9: // Kelvin para Celsius, Fahrenheit e Kelvin
            valores_convertidos[0] = temperatura - KELVIN_OFFSET; // Celsius
            valores_convertidos[1] = ((temperatura - KELVIN_OFFSET) * 9.0 / 5.0) + 32.0; // Fahrenheit
            valores_convertidos[2] = temperatura; // Kelvin
            break;
    }
    return valores_convertidos;
}

void converterTemperatura() {
    while (1) {
        int opcao;
        float temperatura;

        printf("\n===== Conversor de Temperatura =====\n\n");
        printf("Escolha uma das opcoes:\n");
        printf("\t01 - Celsius para Fahrenheit\n");
        printf("\t02 - Fahrenheit para Celsius\n");
        printf("\t03 - Celsius para Kelvin\n");
        printf("\t04 - Kelvin para Celsius\n");
        printf("\t05 - Fahrenheit para Kelvin\n");
        printf("\t06 - Kelvin para Fahrenheit\n");
        printf("\t07 - Tabela de conversao para Celsius\n");
        printf("\t08 - Tabela de conversao para Fahrenheit\n");
        printf("\t09 - Tabela de conversao para Kelvin\n");
        printf("\t0  - Sair\n\n");
        printf("> Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("> Digite a temperatura: ");
            scanf("%f", &temperatura);
            float resultado;
            switch (opcao) {
                case 1:
                    resultado = (temperatura * 9.0 / 5.0) + 32.0;
                    printf("%.2f Celsius = %.2f Fahrenheit\n", temperatura, resultado);
                    break;
                case 2:
                    resultado = (temperatura - 32.0) * 5.0 / 9.0;
                    printf("%.2f Fahrenheit = %.2f Celsius\n", temperatura, resultado);
                    break;
                case 3:
                    resultado = temperatura + KELVIN_OFFSET;
                    printf("%.2f Celsius = %.2f Kelvin\n", temperatura, resultado);
                    break;
                case 4:
                    resultado = temperatura - KELVIN_OFFSET;
                    printf("%.2f Kelvin = %.2f Celsius\n", temperatura, resultado);
                    break;
                case 5:
                    resultado = ((temperatura - 32.0) * 5.0 / 9.0) + KELVIN_OFFSET;
                    printf("%.2f Fahrenheit = %.2f Kelvin\n", temperatura, resultado);
                    break;
                case 6:
                    resultado = ((temperatura - KELVIN_OFFSET) * 9.0 / 5.0) + 32.0;
                    printf("%.2f Kelvin = %.2f Fahrenheit\n", temperatura, resultado);
                    break;
            }
        } else if (opcao >= 7 && opcao <= 9) {
            printf("> Digite a temperatura: ");
            scanf("%f", &temperatura);
            float* valores_convertidos = conversorTemperaturas(opcao, temperatura);

            printf("\n+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------", 25, "-------------------------");

            switch (opcao) {
                case 7:
                    printf("| %-23s | %-23s | %-23s |\n", "Celsius (C)", "Fahrenheit (F)", "Kelvin (K)");
                    break;
                case 8:
                    printf("| %-23s | %-23s | %-23s |\n", "Celsius (C)", "Fahrenheit (F)", "Kelvin (K)");
                    break;
                case 9:
                    printf("| %-23s | %-23s | %-23s |\n", "Celsius (C)", "Fahrenheit (F)", "Kelvin (K)");
                    break;
            }

            printf("+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------", 25, "-------------------------");

            printf("| %-23.4f | %-23.4f | %-23.4f |\n",
                valores_convertidos[0], valores_convertidos[1], valores_convertidos[2]);

            printf("+%.*s+%.*s+%.*s+\n\n",
                25, "-------------------------", 25, "-------------------------", 25, "-------------------------");
        } else if (opcao == 0) {
            break;
        } else {
            printf("Opcao invalida!\n");
        }

        printf("\nAperte ENTER para continuar...");
        getchar();
        getchar();
        
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }
}

#endif
