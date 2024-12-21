#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// Funções para conversão entre unidades de área
float metrosParaCentimetros(float metrosQuadrados) {
    return metrosQuadrados * 10000;
}

float metrosParaMilimetros(float metrosQuadrados) {
    return metrosQuadrados * 1000000;
}

float centimetrosParaMetros(float centimetrosQuadrados) {
    return centimetrosQuadrados / 10000;
}

float milimetrosParaMetros(float milimetrosQuadrados) {
    return milimetrosQuadrados / 1000000;
}

int main() {
    int opcao;
    float valor, resultado;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    printf("Conversor de Unidades de Área\n");
    printf("Escolha uma opção:\n");
    printf("1 - Metros quadrados para Centímetros quadrados\n");
    printf("2 - Metros quadrados para Milímetros quadrados\n");
    printf("3 - Centímetros quadrados para Metros quadrados\n");
    printf("4 - Milímetros quadrados para Metros quadrados\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            resultado = metrosParaCentimetros(valor);
            printf("%.2f metros quadrados equivalem a %.2f centímetros quadrados.\n", valor, resultado);
            break;
        case 2:
            resultado = metrosParaMilimetros(valor);
            printf("%.2f metros quadrados equivalem a %.2f milímetros quadrados.\n", valor, resultado);
            break;
        case 3:
            resultado = centimetrosParaMetros(valor);
            printf("%.2f centímetros quadrados equivalem a %.4f metros quadrados.\n", valor, resultado);
            break;
        case 4:
            resultado = milimetrosParaMetros(valor);
            printf("%.2f milímetros quadrados equivalem a %.6f metros quadrados.\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}