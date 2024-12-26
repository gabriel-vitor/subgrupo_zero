#include <stdio.h>

void converterVolume(float valor, int opcao) {
    switch (opcao) {
        case 1: // Litros para Mililitros e Metros Cúbicos
            printf("%.2f litros equivalem a %.2f mililitros.\n", valor, valor * 1000);
            printf("%.2f litros equivalem a %.6f metros cúbicos.\n", valor, valor / 1000);
            break;
        case 2: // Mililitros para Litros e Metros Cúbicos
            printf("%.2f mililitros equivalem a %.2f litros.\n", valor, valor / 1000);
            printf("%.2f mililitros equivalem a %.6f metros cúbicos.\n", valor, valor / 1000000);
            break;
        case 3: // Metros cúbicos para Litros e Mililitros
            printf("%.6f metros cúbicos equivalem a %.2f litros.\n", valor, valor * 1000);
            printf("%.6f metros cúbicos equivalem a %.2f mililitros.\n", valor, valor * 1000000);
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void converterMetros() {
    float valor;
    int opcao;

    printf("=== Conversor de Unidades de Volume ===\n");
    printf("Escolha a conversão desejada:\n");
    printf("1 - Litros para Mililitros e Metros Cúbicos\n");
    printf("2 - Mililitros para Litros e Metros Cúbicos\n");
    printf("3 - Metros Cúbicos para Litros e Mililitros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    converterVolume(valor, opcao);

    return 0;
}