#include <stdio.h>
#include <stdlib.h>

#define LITRO_ML 1000
#define LITRO_MCUBO 0.001
#define ML_LITRO 0.001
#define ML_MCUBO 0.000001
#define MCUBO_LITRO 1000
#define MCUBO_ML 1000000

void converterVolume(int opcao, float valor) {
    float resultado = 0;

    switch (opcao) {
        case 1: // Litros para Mililitros
            resultado = valor * LITRO_ML;
            printf("\n\n>> %.4f litros = %.2f mililitros\n", valor, resultado);
            break;
        case 2: // Litros para Metros Cubicos
            resultado = valor * LITRO_MCUBO;
            printf("\n\n>> %.4f litros = %.6f metros cubicos\n", valor, resultado);
            break;
        case 3: // Mililitros para Litros
            resultado = valor * ML_LITRO;
            printf("\n\n>> %.4f mililitros = %.2f litros\n", valor, resultado);
            break;
        case 4: // Mililitros para Metros Cubicos
            resultado = valor * ML_MCUBO;
            printf("\n\n>> %.4f mililitros = %.6f metros cubicos\n", valor, resultado);
            break;
        case 5: // Metros Cubicos para Litros
            resultado = valor * MCUBO_LITRO;
            printf("\n\n>> %.4f metros cubicos = %.2f litros\n", valor, resultado);
            break;
        case 6: // Metros Cubicos para Mililitros
            resultado = valor * MCUBO_ML;
            printf("\n\n>> %.4f metros cubicos = %.2f mililitros\n", valor, resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }
}

void conversorVolume() {
    while (1) {
        int opcao;
        float valor;
        printf("=== Conversor de Unidades de Volume ===\n");
        printf("1 - Litros para Mililitros\n");
        printf("2 - Litros para Metros Cubicos\n");
        printf("3 - Mililitros para Litros\n");
        printf("4 - Mililitros para Metros Cubicos\n");
        printf("5 - Metros Cubicos para Litros\n");
        printf("6 - Metros Cubicos para Mililitros\n");
        printf("0 - Sair\n");
        printf("\n> Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        if(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 || opcao == 6) {
            printf("\n> Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            converterVolume(opcao, valor);
        } else printf("Opcao invalida!\n");

        printf("\nPressione ENTER para continuar...");
        getchar();
        getchar();

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }
}