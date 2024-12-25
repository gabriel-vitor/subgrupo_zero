#include <stdio.h>

void converterUnidades(double valor, char unidadeOrigem, char unidadeDestino) {
    double resultado;

    switch (unidadeOrigem) {
        case 'B': // bytes
            if (unidadeDestino == 'M') {
                resultado = valor / (1024 * 1024);
                printf("%.2lf bytes é igual a %.2lf MB\n", valor, resultado);
            } else if (unidadeDestino == 'G') {
                resultado = valor / (1024 * 1024 * 1024);
                printf("%.2lf bytes é igual a %.2lf GB\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        case 'M': // megabytes
            if (unidadeDestino == 'B') {
                resultado = valor * 1024 * 1024;
                printf("%.2lf MB é igual a %.2lf bytes\n", valor, resultado);
            } else if (unidadeDestino == 'G') {
                resultado = valor / 1024;
                printf("%.2lf MB é igual a %.2lf GB\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        case 'G': // gigabytes
            if (unidadeDestino == 'B') {
                resultado = valor * 1024 * 1024 * 1024;
                printf("%.2lf GB é igual a %.2lf bytes\n", valor, resultado);
            } else if (unidadeDestino == 'M') {
                resultado = valor * 1024;
                printf("%.2lf GB é igual a %.2lf MB\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        default:
            printf("Unidade de origem inválida.\n");
            break;
    }
}

int main() {
    double valor;
    char unidadeOrigem, unidadeDestino;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de origem (B para bytes, M para megabytes, G para gigabytes): ");
    scanf(" %c", &unidadeOrigem);
    printf("Digite a unidade de destino (B para bytes, M para megabytes, G para gigabytes): ");
    scanf(" %c", &unidadeDestino);

    converterUnidades(valor, unidadeOrigem, unidadeDestino);

    return 0;
}
