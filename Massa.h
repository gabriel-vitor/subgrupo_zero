//Código desenvolvido por Andressa Sousa Fonseca 
 
#ifndef MASSA_H
#define MASSA_H

#include <stdio.h>
#include <stdlib.h>

#define K 1000 //mil
#define M (1000*K) // 1 milhão
#define B (1000*M) //1 bilhão

float* conversorPeso(int option, float value) {
    static float converted_values[4] = {0,0,0,0};
    switch (option)
    {
        case 1: //Miligramas
            converted_values[0] = value; //em miligramas
            converted_values[1] = value/K; //em gramas
            converted_values[2] = value/M; //em quilogramas
            converted_values[3] = value/B; //em toneladas
            break;
        case 2://Gramas
            converted_values[0] = value;
            converted_values[1] = value*K;
            converted_values[2] = value/K;
            converted_values[3] = value/M;
            break;
        case 3://Quilogramas
            converted_values[0] = value;
            converted_values[1] = value*M;
            converted_values[2] = value*K;
            converted_values[3] = value/K;
            break;
        case 4://Toneladas
            converted_values[0] = value;
            converted_values[1] = value*B;
            converted_values[2] = value*M;
            converted_values[3] = value*K;
            break;
    }

    return converted_values;
}

void converterMassa() {
    while (1) {
        int option = 0;
        float value = 0.0;
        printf("===== Conversor de Massa =====\n\n");
        printf("Escolha uma das opcoes:\n");
        printf("\t01 - Miligramas (mg) para Gramas (g)\n"
                "\t02 - Miligramas (mg) para Quilogramas (kg)\n"
                "\t03 - Miligramas (mg) para Toneladas (T)\n"
                "\t04 - Gramas (g) para Miligramas (mg)\n"
                "\t05 - Gramas (g) para Quilogramas (kg)\n"
                "\t06 - Gramas (g) para Toneladas (T)\n"
                "\t07 - Quilogramas (kg) para Miligramas (mg)\n"
                "\t08 - Quilogramas (kg) para Gramas (g)\n"
                "\t09 - Quilogramas (kg) para Toneladas (T)\n"
                "\t10 - Toneladas (T) para Miligramas (mg)\n"
                "\t11 - Toneladas (T) para Gramas (g)\n"
                "\t12 - Toneladas (T) para Quilogramas (kg)\n"
                "\t13 - Tabela de conversao para Miligramas (mg)\n"
                "\t14 - Tabela de conversao para Gramas (g)\n"
                "\t15 - Tabela de conversao para Quilogramas (kg)\n"
                "\t16 - Tabela de conversao para Toneladas (T)\n"
                "\t0  - Sair\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i",&option);

        if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5 || option == 6 || option == 7 || option == 8 || option == 9 || option == 10 || option == 11 || option == 12) {
            printf("\n> Digite o valor: ");
            scanf("%f", &value);
            switch(option) {
                case 1: printf("\n>> %.4f mg = %.4f g\n\n", value, conversorPeso(1, value)[option]); break;
                case 2: printf("\n>> %.4f mg = %.4f kg\n\n", value, conversorPeso(1, value)[option]); break;
                case 3: printf("\n>> %.4f mg = %.4f T\n\n", value, conversorPeso(1, value)[option]); break;
                case 4: printf("\n>> %.4f g = %.4f mg\n\n", value, conversorPeso(2, value)[option-3]); break;
                case 5: printf("\n>> %.4f g = %.4f kg\n\n", value, conversorPeso(2, value)[option-3]); break;
                case 6: printf("\n>> %.4f g = %.4f T\n\n", value, conversorPeso(2, value)[option-3]); break;
                case 7: printf("\n>> %.4f kg = %.4f mg\n\n", value, conversorPeso(3, value)[option-6]); break;
                case 8: printf("\n>> %.4f kg = %.4f g\n\n", value, conversorPeso(3, value)[option-6]); break;
                case 9: printf("\n>> %.4f kg = %.4f T\n\n", value, conversorPeso(3, value)[option-6]); break;
                case 10: printf("\n>> %.4f T = %.4f mg\n\n", value, conversorPeso(4, value)[option-9]); break;
                case 11: printf("\n>> %.4f T = %.4f g\n\n", value, conversorPeso(4, value)[option-9]); break;
                case 12: printf("\n>> %.4f T = %.4f kg\n\n", value, conversorPeso(4, value)[option-9]); break;
            }
        }
        else if(option == 13 || option == 14 || option == 15 || option == 16) {
            printf("\n> Digite o valor: ");
            scanf("%f", &value);

            float* converted_values = conversorPeso(option-12, value);

            printf("\n+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");

            switch(option) {
                case 13: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Miligramas (mg)", "Gramas (g)", "Quilogramas (kg)", "Toneladas (T)"); break;
                case 14: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Gramas (g)", "Miligramas (mg)", "Quilogramas (kg)", "Toneladas (T)"); break;
                case 15: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Quilogramas (kg)", "Miligramas (mg)", "Gramas (g)", "Toneladas (T)"); break;
                case 16: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Toneladas (T)", "Miligramas (mg)", "Gramas (g)", "Quilogramas (kg)"); break;
            }

            printf("+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");

            printf("| %-23.4f | %-23.4f | %-23.4f | %-23.4f |\n",
                converted_values[0], converted_values[1], converted_values[2], converted_values[3]);

            printf("+%.*s+%.*s+%.*s+%.*s+\n\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");
        }
        else if(option == 0) break;
        else printf("\n\nOpcao invalida. ");

        printf("Aperte ENTER para escolher uma nova opcao...");
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
