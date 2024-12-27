#include <stdio.h>
#include <stdlib.h>

#define LITRO_ML 1000
#define LITRO_MCUBO 0.001
#define ML_LITRO 0.001
#define ML_MCUBO 0.000001
#define MCUBO_LITRO 1000
#define MCUBO_ML 1000000

float* converterVolume(int opcao, float valor) {
    static float valores_convertidos[3] = {0, 0, 0};
    switch (opcao) {
        case 1: // Litros para Mililitros e Metros Cúbicos
            valores_convertidos[0] = valor;
            valores_convertidos[1] = valor * LITRO_ML;
            valores_convertidos[2] = valor * LITRO_MCUBO;
            break;
        case 2: // Mililitros para Litros e Metros Cúbicos
            valores_convertidos[0] = valor;
            valores_convertidos[1] = valor * ML_LITRO;
            valores_convertidos[2] = valor * ML_MCUBO;
            break;
        case 3: // Metros cúbicos para Litros e Mililitros
            valores_convertidos[0] = valor;
            valores_convertidos[1] = valor * MCUBO_LITRO;
            valores_convertidos[2] = valor * MCUBO_ML;
            break;
        default:
            printf("Opção inválida!\n");
    }
    return valores_convertidos;
}

void conversorVolume() {
    while (1) {
        int opcao;
        float valor;
        printf("=== Conversor de Unidades de Volume ===\n");
        printf("1 - Litros para Mililitros e Metros Cubicos\n");
        printf("2 - Mililitros para Litros e Metros Cubicos\n");
        printf("3 - Metros cubicos para Litros e Mililitros\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 0) break;
        
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);
        
        float* resultados = converterVolume(opcao, valor);
        switch (opcao) {
            case 1:
                printf("%.2f litros = %.2f mililitros, %.6f metros cubicos\n", resultados[0], resultados[1], resultados[2]);
                break;
            case 2:
                printf("%.2f mililitros = %.2f litros, %.6f metros cubicos\n", resultados[0], resultados[1], resultados[2]);
                break;
            case 3:
                printf("%.6f metros cubicos = %.2f litros, %.2f mililitros\n", resultados[0], resultados[1], resultados[2]);
                break;
        }
        printf("\nPressione ENTER para continuar...");
        getchar();
        getchar();
        system("clear");
    }
}

int main() {
    conversorVolume();
    return 0;
}
