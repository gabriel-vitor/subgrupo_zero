//Código desenvolvido por Andressa Sousa Fonseca 
 

#include <stdio.h>
#include <stdlib.h>

#define K 1000 //mil
#define M (1000*K) // 1 milhão
#define B (1000*M) //1 bilhão

float* conversor(int option, float value) {
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
            converted_values[0] = value*K;
            converted_values[1] = value;
            converted_values[2] = value/K;
            converted_values[3] = value/M;
            break;
        case 3://Quilogramas
            converted_values[0] = value*M;
            converted_values[1] = value*K;
            converted_values[2] = value;
            converted_values[3] = value/K;
            break;
        case 4://Toneladas
            converted_values[0] = value*B;
            converted_values[1] = value*M;
            converted_values[2] = value*K;
            converted_values[3] = value;
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
        printf("\t01 - Miligramas (mg)\n"
            "\t02 - Gramas (g)\n"
            "\t03 - Quilogramas (kg)\n"
            "\t04 - Toneladas (t) \n"
            "\t0  - Sair\n"
        "\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i",&option);

     if(option == 1 || option == 2 || option == 3 || option == 4) {
            printf("\n> Digite o valor: ");
            scanf("%f",&value);

            float* converted_values = conversor(option,value);

            printf("\n+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");
            printf("| %-23s | %-23s | %-23s | %-23s |\n", "Miligramas (mg)", "Gramas (g)", "Quilogramas (kg)", "Toneladas (t)");

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
