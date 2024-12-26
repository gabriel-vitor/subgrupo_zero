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
            converted_values[0] = value*KW;
            converted_values[1] = value;
            converted_values[2] = value*(KW/CV);
            converted_values[3] = value*(KW/HP);
            break;
        case 3:
            converted_values[0] = value*CV;
            converted_values[1] = value*(CV/KW);
            converted_values[2] = value;
            converted_values[3] = value*(CV/HP);
            break;
        case 4:
            converted_values[0] = value*HP;
            converted_values[1] = value*(HP/KW);
            converted_values[2] = value*(HP/CV);
            converted_values[3] = value;
            break;
    }

    return converted_values;
}

void conversorWatts() {
    while (1) {
        int option = 0;
        float value = 0.0;
        printf("Bem-vindo ao conversor de unidades de medida de potencia!\n\n");
        printf("Escolha a unidade de medida base:\n");
        printf("\t1 - Watts (W)\n"
            "\t2 - Quilowatts (kW)\n"
            "\t3 - Cavalo-vapor (CV)\n"
            "\t4 - Cavalo de forca (HP)\n"
            "\t0 - Sair"
        "\n\n");
        printf("Digite sua opcao: ");
        scanf("%i",&option);

        if(option == 1 || option == 2 || option == 3 || option == 4) {
            printf("\nEscolha o valor de potencia: ");
            scanf("%f",&value);

            float* converted_values = conversor(option,value);

            printf("\n+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");

            printf("| %-23s | %-23s | %-23s | %-23s |\n",
                "Watts (W)", "Quilowatts (kW)", "Cavalo-vapor (CV)", "Cavalo de forca (HP)");

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

    return 0;
}
#endif
