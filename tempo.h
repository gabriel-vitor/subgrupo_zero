/*Código desenvolvido pelo aluno: Henrique Daniel Resende, Subgrupo Zero. 
O código pergunta ao usuário qual é a unidade de tempo e ele responde entre segundos, 
minutos e horas, depois o usuário fornece a quantidade. Se for minutos o retorno será
a quantidade de segundos e de horas que possuem na quantidade de minutos dada pelo usuário
a mesma coisa acontece com segundos e horas, o programa fornece a quantidade das outras medidas*/

#include <stdio.h>
#include <string.h>

//função para converter as unidades de tempo
void converterUnidadesTempo(double valor, char unidadeOrigem, char unidadeDestino) {
    double resultado; 

// Verifica a unidade de origem
    switch (unidadeOrigem) {
        case 'S': // segundos
            if (unidadeDestino == 'M') { // Se a unidade de destino for minutos
                resultado = valor / 60.0;
                printf("%.2lf segundos é igual a %.2lf minutos\n", valor, resultado);
            } else if (unidadeDestino == 'H') { // Se a unidade de destino for horas
                resultado = valor / 3600.0;
                printf("%.2lf segundos é igual a %.2lf horas\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        case 'M': // minutos
            if (unidadeDestino == 'S') {
                resultado = valor * 60.0;
                printf("%.2lf minutos é igual a %.2lf segundos\n", valor, resultado);
            } else if (unidadeDestino == 'H') {
                resultado = valor / 60.0;
                printf("%.2lf minutos é igual a %.2lf horas\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        case 'H': // horas
            if (unidadeDestino == 'S') {
                resultado = valor * 3600.0;
                printf("%.2lf horas é igual a %.2lf segundos\n", valor, resultado);
            } else if (unidadeDestino == 'M') {
                resultado = valor * 60.0;
                printf("%.2lf horas é igual a %.2lf minutos\n", valor, resultado);
            } else {
                printf("Unidade de destino inválida.\n");
            }
            break;

        default:
            printf("Unidade de origem inválida.\n");
            break;
    }
}

// Função principal que interage com o usuário
void converterTempo() {
    double valor;
    char unidadeOrigem, unidadeDestino;

// Solicita ao usuário o valor e as unidades de origem e destino
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);
    printf("Digite a unidade de origem (S para segundos, M para minutos, H para horas): ");
    scanf(" %c", &unidadeOrigem);
    printf("Digite a unidade de destino (S para segundos, M para minutos, H para horas): ");
    scanf(" %c", &unidadeDestino);

// Chama a função que realiza a conversão
    converterUnidadesTempo(valor, unidadeOrigem, unidadeDestino);
}

