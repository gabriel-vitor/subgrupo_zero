//Código desenvolvido pelo aluno: Lucas Carneiro de Araújo Lima. 
#ifndef TEMPO_H  
#define TEMPO_H  

#include <stdio.h>
#include <stdlib.h>

#define MIN 60
#define HOUR 3600

float* conversorTempo(int option, float value) {
    static float converted_values[3] = {0,0,0};
    switch (option)
    {
        case 1:
            converted_values[0] = value;
            converted_values[1] = value/MIN;
            converted_values[2] = value/HOUR;
            break;
        case 2:
            converted_values[0] = value;
            converted_values[1] = value*MIN;
            converted_values[2] = value/MIN;
            break;
        case 3:
            converted_values[0] = value;
            converted_values[1] = value*HOUR;
            converted_values[2] = value*(HOUR/MIN);
            break;
    }

    return converted_values;
}

void converterTempo() {
    while (1) {
        int option = 0;
        float value = 0.0;
        printf("===== Conversor de Potencia =====\n\n");
        printf("Escolha uma das opcoes:\n");
        printf("\t01 - Segundos (S) para Minutos (M)\n"
            "\t02 - Segundos (S) para Horas (H)\n"
            "\t03 - Minutos (M) para Segundos (S)\n"
            "\t04 - Minutos (M) para Horas (H)\n"
            "\t05 - Horas (H) para Segundos (S)\n"
            "\t06 - Horas (H) para Minutos (M)\n"
            "\t07 - Tabela de conversao para Segundos (S)\n"
            "\t08 - Tabela de conversao para Minutos (M)\n"
            "\t09 - Tabela de conversao para Horas (H)\n"
            "\t0  - Sair\n"
        "\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i",&option);

        if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5 || option == 6) {
            printf("\n> Digite o valor: ");
            scanf("%f",&value);
            switch(option) {
                case 1: printf("\n>> %.4f S = %.4f M\n\n",value,conversorTempo(1,value)[option]);break;
                case 2: printf("\n>> %.4f S = %.4f H\n\n",value,conversorTempo(1,value)[option]);break;
                case 3: printf("\n>> %.4f M = %.4f S\n\n",value,conversorTempo(2,value)[option-2]);break;
                case 4: printf("\n>> %.4f M = %.4f H\n\n",value,conversorTempo(2,value)[option-2]);break;
                case 5: printf("\n>> %.4f H = %.4f S\n\n",value,conversorTempo(3,value)[option-4]);break;
                case 6: printf("\n>> %.4f H = %.4f M\n\n",value,conversorTempo(3,value)[option-4]);break;
            }
        }
        else if(option == 7 || option == 8 || option == 9) {
            printf("\n> Digite o valor: ");
            scanf("%f",&value);

            float* converted_values = conversorTempo(option-6,value);

           printf("\n+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------");

            switch(option) {
                case 7: 
                    printf("| %-23s | %-23s | %-23s |\n", "Segundos (S)", "Minutos (M)", "Horas (H)"); 
                    break;
                case 8: 
                    printf("| %-23s | %-23s | %-23s |\n", "Minutos (M)", "Segundos (S)", "Horas (H)"); 
                    break;
                case 9: 
                    printf("| %-23s | %-23s | %-23s |\n", "Horas (H)", "Segundos (S)", "Minutos (M)"); 
                    break;
            }

            printf("+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------");

            printf("| %-23.4f | %-23.4f | %-23.4f |\n",
                converted_values[0], converted_values[1], converted_values[2]);

            printf("+%.*s+%.*s+%.*s+\n\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------");
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
