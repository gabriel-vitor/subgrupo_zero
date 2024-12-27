#ifndef VELOCIDADE_H  
#define VELOCIDADE_H  

#include <stdio.h>
#include <stdlib.h>

#define MS_KMH 3.6
#define MPH_KMH 1.609
#define MS_MPH 2.237

float* conversorVelocidade(int option, float value) {
    static float converted_values[3] = {0, 0, 0};
    switch (option) {
        case 1:
            converted_values[0] = value;
            converted_values[1] = value / MS_KMH;
            break;
        case 2:
            converted_values[0] = value;
            converted_values[1] = value * MS_KMH;
            break;
        case 3:
            converted_values[0] = value;
            converted_values[1] = value / MPH_KMH;
            break;
        case 4:
            converted_values[0] = value;
            converted_values[1] = value * MPH_KMH;
            break;
        case 5:
            converted_values[0] = value;
            converted_values[1] = value * MS_MPH;
            break;
        case 6:
            converted_values[0] = value;
            converted_values[1] = value / MS_MPH;
            break;
    }

    return converted_values;
}

void converterVelocidade() {
    while (1) {
        int opcao = 0;
        float velocidade = 0.0;
        printf("===== Conversor de Velocidade =====\n\n");
        printf("1 - km/h para m/s\n");                   
        printf("2 - m/s para km/h\n");                   
        printf("3 - km/h para mph\n");                   
        printf("4 - mph para km/h\n");                   
        printf("5 - m/s para mph\n");                    
        printf("6 - mph para m/s\n");                    
        printf("0 - Sair\n");                    
        printf("\n> Digite sua escolha (1-6): ");           
        scanf("%d", &opcao);                           
        
        if(opcao >= 1 && opcao <= 6) {
            printf("> Digite a velocidade: ");
            scanf("%f", &velocidade);
            float* converted_values = conversorVelocidade(opcao, velocidade);

            switch(opcao) {
                case 1: printf("\n>> %.2f km/h = %.2f m/s\n\n", velocidade, converted_values[1]); break;
                case 2: printf("\n>> %.2f m/s = %.2f km/h\n\n", velocidade, converted_values[1]); break;
                case 3: printf("\n>> %.2f km/h = %.2f mph\n\n", velocidade, converted_values[1]); break;
                case 4: printf("\n>> %.2f mph = %.2f km/h\n\n", velocidade, converted_values[1]); break;
                case 5: printf("\n>> %.2f m/s = %.2f mph\n\n", velocidade, converted_values[1]); break;
                case 6: printf("\n>> %.2f mph = %.2f m/s\n\n", velocidade, converted_values[1]); break;
            }
        }
        else if(opcao == 0) break;
        else printf("Opção invalida!\n");

        printf("Pressione ENTER para escolher uma nova opcao...");
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
