#ifndef BYTES_H
#define BYTES_H

#include <stdio.h>
#include <stdlib.h>

#define KB 1024
#define MB 1048576
#define GB 1073741824

float* conversorBytes(int option, float value) {
    static float converted_values[4] = {0, 0, 0, 0};
    switch (option) {
        case 1: // Bytes
            converted_values[0] = value;
            converted_values[1] = value / KB;
            converted_values[2] = value / MB;
            converted_values[3] = value / GB;
            break;
        case 2: // Kilobytes
            converted_values[0] = value;
            converted_values[1] = value * KB;
            converted_values[2] = value / KB;
            converted_values[3] = value / MB;
            break;
        case 3: // Megabytes
            converted_values[0] = value;
            converted_values[1] = value * MB;
            converted_values[2] = value * KB;
            converted_values[3] = value / KB;
            break;
        case 4: // Gigabytes
            converted_values[0] = value;
            converted_values[1] = value * GB;
            converted_values[2] = value * MB;
            converted_values[3] = value * KB;
            break;
    }
    return converted_values;
}

void conversorBytesMenu() {
    while (1) {
        int option = 0;
        float value = 0.0;

        printf("===== Conversor de Tamanhos de Arquivos =====\n\n");
        printf("Escolha uma das opcoes:\n");
        printf("\t01 - Bytes (B) para Kilobytes (KB)\n"
                "\t02 - Bytes (B) para Megabytes (MB)\n"
                "\t03 - Bytes (B) para Gigabytes (GB)\n"
                "\t04 - Kilobytes (KB) para Bytes (B) \n"
                "\t05 - Kilobytes (KB) para Megabytes (MB) \n"
                "\t06 - Kilobytes (KB) para Gigabytes (GB)\n"
                "\t07 - Megabytes (MB) para Bytes (B) \n"
                "\t08 - Megabytes (MB) para Kilobytes (KB) \n"
                "\t09 - Megabytes (MB) para Gigabytes (GB)\n"
                "\t10 - Gigabytes (GB) para Bytes (B)\n"
                "\t11 - Gigabytes (GB) para Kiloytes (KB)\n"
                "\t12 - Gigabytes (GB) para Megabytes (MB)\n"
                "\t13 - Tabela de conversao para Bytes (B)\n"
                "\t14 - Tabela de conversao para Kilobytes (KB)\n"
                "\t15 - Tabela de conversao para Megabytes (MB)\n"
                "\t16 - Tabela de conversao para Gigabytes (GB)\n"
                "\t0  - Sair\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i", &option);

        if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5 || option == 6 || option == 7 || option == 8 || option == 9 || option == 10 || option == 11 || option == 12) {
            printf("\n> Digite o valor: ");
            scanf("%f",&value);
            switch(option) {
                case 1: printf("\n>> %.4f B = %.4f KB\n\n",value,conversorBytes(1,value)[option]);break;
                case 2: printf("\n>> %.4f B = %.4f MB\n\n",value,conversorBytes(1,value)[option]);break;
                case 3: printf("\n>> %.4f B = %.4f GB\n\n",value,conversorBytes(1,value)[option]);break;
                case 4: printf("\n>> %.4f KB = %.4f B\n\n",value,conversorBytes(2,value)[option-3]);break;
                case 5: printf("\n>> %.4f KB = %.4f MB\n\n",value,conversorBytes(2,value)[option-3]);break;
                case 6: printf("\n>> %.4f KB = %.4f GB\n\n",value,conversorBytes(2,value)[option-3]);break;
                case 7: printf("\n>> %.4f MB = %.4f B\n\n",value,conversorBytes(3,value)[option-6]);break;
                case 8: printf("\n>> %.4f MB = %.4f KB\n\n",value,conversorBytes(3,value)[option-6]);break;
                case 9: printf("\n>> %.4f MB = %.4f GB\n\n",value,conversorBytes(3,value)[option-6]);break;
                case 10: printf("\n>> %.4f GB = %.4f B\n\n",value,conversorBytes(4,value)[option-9]);break;
                case 11: printf("\n>> %.4f GB = %.4f KB\n\n",value,conversorBytes(4,value)[option-9]);break;
                case 12: printf("\n>> %.4f GB = %.4f MB\n\n",value,conversorBytes(4,value)[option-9]);break;
            }
        }
        else if(option == 13 || option == 14 || option == 15 || option == 16) {
            printf("\n> Digite o valor: ");
            scanf("%f",&value);

            float* converted_values = conversorBytes(option-12,value);

            printf("\n+%.*s+%.*s+%.*s+%.*s+\n",
                25, "-------------------------", 25, "-------------------------",
                25, "-------------------------", 25, "-------------------------");

            switch(option) {
                case 13: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Bytes (B)", "Kilobytes (KB)", "Megabytes (MB)", "Gigabytes (GB)"); break;
                case 14: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Kilobytes (KB)", "Bytes (B)", "Megabytes (MB)", "Gigabytes (GB)"); break;
                case 15: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Megabytes (MB)", "Bytes (B)", "Kilobytes (KB)", "Gigabytes (GB)"); break;
                case 16: printf("| %-23s | %-23s | %-23s | %-23s |\n", "Gigabytes (GB)", "Bytes (B)", "Kilobytes (KB)", "Megabytes (MB)"); break;
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
