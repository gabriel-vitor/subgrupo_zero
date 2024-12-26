#ifndef BYTES_H
#define BYTES_H

#include <stdio.h>
#include <stdlib.h>

#define KB 1024
#define MB (1024 * KB)
#define GB (1024 * MB)

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
            converted_values[0] = value * KB;
            converted_values[1] = value;
            converted_values[2] = value / KB;
            converted_values[3] = value / MB;
            break;
        case 3: // Megabytes
            converted_values[0] = value * MB;
            converted_values[1] = value * KB;
            converted_values[2] = value;
            converted_values[3] = value / KB;
            break;
        case 4: // Gigabytes
            converted_values[0] = value * GB;
            converted_values[1] = value * MB;
            converted_values[2] = value * KB;
            converted_values[3] = value;
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
        printf("\t01 - Bytes (B)\n"
               "\t02 - Kilobytes (KB)\n"
               "\t03 - Megabytes (MB)\n"
               "\t04 - Gigabytes (GB)\n"
               "\t0  - Sair\n\n");
        printf("> Digite sua opcao: ");
        scanf("%i", &option);

        if (option >= 1 && option <= 4) {
            printf("\n> Digite o valor: ");
            scanf("%f", &value);

            float* converted_values = conversorBytes(option, value);

            printf("\n+---------------+---------------+---------------+---------------+\n");
            printf("| Bytes (B)     | Kilobytes (KB) | Megabytes (MB) | Gigabytes (GB) |\n");
            printf("+---------------+---------------+---------------+---------------+\n");
            printf("| %-13.4f | %-13.4f | %-13.4f | %-13.4f |\n",
                   converted_values[0], converted_values[1], converted_values[2], converted_values[3]);
            printf("+---------------+---------------+---------------+---------------+\n\n");
        } else if (option == 0) break;
        else printf("\n\nOpcao invalida.\n");

        printf("Pressione ENTER para continuar...");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        getchar();

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }
}
#endif
