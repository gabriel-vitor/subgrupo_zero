//Código desenvolvido pelo aluno: Lucas Carneiro de Araújo Lima. 
#ifndef WATTS_H  
#define WATTS_H  

#include <stdio.h>
#include <stdlib.h>

#define KW 1000
#define CV 735.5
#define HP 745.7

float* conversor(int option, float value) {
    static float converted_values[4] = {0,0,0,0};
    switch (option)
    {
        case 1:
            converted_values[0] = value;
            converted_values[1] = value/KW;
            converted_values[2] = value/CV;
            converted_values[3] = value/HP;
            break;
        case 2:
            converted_values[0] = value;
            converted_values[1] = value*KW;
            converted_values[2] = value*(KW/CV);
            converted_values[3] = value*(KW/HP);
            break;
        case 3:
            converted_values[0] = value;
            converted_values[1] = value*CV;
            converted_values[2] = value*(CV/KW);
            converted_values[3] = value*(CV/HP);
            break;
        case 4:
            converted_values[0] = value;
            converted_values[1] = value*HP;
            converted_values[2] = value*(HP/KW);
            converted_values[3] = value*(HP/CV);
            break;
    }

    return converted_values;
}

void conversorWatts() {
    while (1) {
        int option = 0;
        float value = 0.0;
        printf("===== Conversor de Potencia =====\n\n");
        printf("Escolha uma das opcoes:\n");
        printf("\t01 - Watts (W) para Quilowatts (kW)\n"
            "\t02 - Watts (W) para Cavalo-vapor (CV)\n"
            "\t03 - Watts (W) para Cavalo de forca (HP)\n"
            "\t04 - Quilowatts (kW) para Watts (W)\n"
            "\t05 - Quilowatts (kW) para Cavalo-vapor (CV)\n"
            "\t06 - Quilowatts (kW) para Cavalo de forca (HP)\n"
            "\t07 - Cavalo-vapor (CV) para Watts (W)\n"
            "\t08 - Cavalo-vapor (CV) para Quilowatts (kW)\n"
            "\t09 - Cavalo-vapor (CV) para Cavalo de forca (HP)\n"
            "\t10 - Cavalo de forca (HP) para Watts (W)\n"
            "\t11 - Cavalo de forca (HP) para Quilowatts (kW)\n"
            "\t12 - Cavalo de forca (HP) para Cavalo-vapor (CV)\n"
            "\t13 - Tabela de conversao para Watts (W)\n"
            "\t14 - Tabela de conversao para Quilowatts (kW)\n"
            "\t15 - Tabela de conversao para Cavalo-vapor (CV)\n"
            "\t16 - Tabela de conversao para Cavalo de forca (HP)\n"
            "\t0  - Sair\n"
        "\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i",&option);

        if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5 || option == 6 || option == 7 || option == 8 || option == 9 || option == 10 || option == 11 || option == 12) {
            printf("\n> Escolha o valor de potencia: ");
            scanf("%f",&value);
            switch(option) {
                case 1: printf("\n>> %f W = %f kW\n\n",value,conversor(1,value)[option]);break;
                case 2: printf("\n>> %f W = %f CV\n\n",value,conversor(1,value)[option]);break;
                case 3: printf("\n>> %f W = %f HP\n\n",value,conversor(1,value)[option]);break;
                case 4: printf("\n>> %f kW = %f W\n\n",value,conversor(2,value)[option-3]);break;
                case 5: printf("\n>> %f kW = %f CV\n\n",value,conversor(2,value)[option-3]);break;
                case 6: printf("\n>> %f kW = %f HP\n\n",value,conversor(2,value)[option-3]);break;
                case 7: printf("\n>> %f CV = %f W\n\n",value,conversor(2,value)[option-6]);break;
                case 8: printf("\n>> %f CV = %f kW\n\n",value,conversor(2,value)[option-6]);break;
                case 9: printf("\n>> %f CV = %f HP\n\n",value,conversor(2,value)[option-6]);break;
                case 10: printf("\n>> %f HP = %f W\n\n",value,conversor(2,value)[option-9]);break;
                case 11: printf("\n>> %f HP = %f kW\n\n",value,conversor(2,value)[option-9]);break;
                case 12: printf("\n>> %f HP = %f CV\n\n",value,conversor(2,value)[option-9]);break;
            }
        }
        else if(option == 13 || option == 14 || option == 15 || option == 16) {
            printf("\n> Escolha o valor de potencia: ");
            scanf("%f",&value);

            float* converted_values = conversor(option-12,value);

            printf("\n+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");

            switch(option) {
                case 13: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Watts (W)", "Quilowatts (kW)", "Cavalo-vapor (CV)", "Cavalo de forca (HP)"); break;
                case 14: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Quilowatts (kW)", "Watts (W)", "Cavalo-vapor (CV)", "Cavalo de forca (HP)"); break;
                case 15: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Cavalo-vapor (CV)", "Watts (W)", "Quilowatts (kW)", "Cavalo de forca (HP)"); break;
                case 16: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Cavalo de forca (HP)", "Watts (W)", "Quilowatts (kW)", "Cavalo-vapor (CV)"); break;
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
