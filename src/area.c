#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// Função para converter metros quadrados para hectares
float metrosParaHectares(float metrosQuadrados) {
    return metrosQuadrados / 10000;
}

// Função para converter metros quadrados para acres
float metrosParaAcres(float metrosQuadrados) {
    return metrosQuadrados / 4046.86;
}

// Função para converter hectares para metros quadrados
float hectaresParaMetros(float hectares) {
    return hectares * 10000;
}

// Função para converter acres para metros quadrados
float acresParaMetros(float acres) {
    return acres * 4046.86;
}

int main() {
    int opcao;
    float valor, resultado;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    printf("Conversor de Unidades de Área\n");
    printf("Escolha uma opção:\n");
    printf("1 - Metros quadrados para Hectares\n");
    printf("2 - Metros quadrados para Acres\n");
    printf("3 - Hectares para Metros quadrados\n");
    printf("4 - Acres para Metros quadrados\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            resultado = metrosParaHectares(valor);
            printf("%.2f metros quadrados equivalem a %.4f hectares.\n", valor, resultado);
            break;
        case 2:
            resultado = metrosParaAcres(valor);
            printf("%.2f metros quadrados equivalem a %.4f acres.\n", valor, resultado);
            break;
        case 3:
            resultado = hectaresParaMetros(valor);
            printf("%.4f hectares equivalem a %.2f metros quadrados.\n", valor, resultado);
            break;
        case 4:
            resultado = acresParaMetros(valor);
            printf("%.4f acres equivalem a %.2f metros quadrados.\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}