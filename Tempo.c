/* Programa feito pelo aluno Caio Chaves Lima. Este programa é um conversor de unidades de comprimento que permite transformar valores entre **metros**, **centímetros** e **milímetros**.
 Você informa o valor numérico, a unidade de origem  e a unidade de destino, e o programa calcula e exibe o resultado da conversão na tela.*/


#include <stdio.h>
#include <string.h>

void conversorDeUnidades() {
    double valor;
    char unidadeOrigem[20], unidadeDestino[20];

    printf("=== Conversor de Unidades de Comprimento ===\n");
    printf("Unidades disponiveis: metro, centimetro, milimetro\n");

    // Entrada do valor e unidades
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (metros, centimetros, milimetros): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino (metros, centimetros, milimetros): ");
    scanf("%s", unidadeDestino);

    // Converter o valor para metros primeiro
    double valorEmMetros;
    if (strcmp(unidadeOrigem, "metros") == 0) { // metro
        valorEmMetros = valor;
    } else if (strcmp(unidadeOrigem, "centimetros") == 0) { // centímetro
        valorEmMetros = valor / 100.0;
    } else if (strcmp(unidadeOrigem, "milimetros") == 0) { // milímetro
        valorEmMetros = valor / 1000.0;
    } else {
        printf("Unidade de origem invalida!\n");
        return; // Saída da função
    }

    // Converter de metros para a unidade de destino
    double resultado;
    if (strcmp(unidadeDestino, "metros") == 0) { // metro
        resultado = valorEmMetros;
    } else if (strcmp(unidadeDestino, "centimetros") == 0) { // centímetro
        resultado = valorEmMetros * 100.0;
    } else if (strcmp(unidadeDestino, "milimetros") == 0) { // milímetro
        resultado = valorEmMetros * 1000.0;
    } else {
        printf("Unidade de destino invalida!\n");
        return; // Saída da função
    }

    printf("%.2f %s equivale a %.2f %s\n", valor, unidadeOrigem, resultado, unidadeDestino);
}

int main() {
    conversorDeUnidades();
    return 0;
}
