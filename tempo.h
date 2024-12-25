/*Código desenvolvido pelo aluno: Henrique Daniel Resende, Subgrupo Zero. 
O código pergunta ao usuário qual é a unidade de tempo e ele responde entre segundos, 
minutos e horas, depois o usuário fornece a quantidade. Se for minutos o retorno será
a quantidade de segundos e de horas que possuem na quantidade de minutos dada pelo usuário
a mesma coisa acontece com segundos e horas, o programa fornece a quantidade das outras medidas*/
#ifndef TEMPO_H  // Verifica se TEMPERATURA_H já foi definido para evitar redefinição.
#define TEMPO_H  // Define o identificador TEMPERATURA_H.

#include <stdio.h>
#include <string.h>

void converterTempo() {
    char unidade[20]; // Variável para armazenar a unidade (segundos, minutos ou horas)
    double valor;     // Valor fornecido pelo usuário

    while (1) {
        // Pergunta a unidade de tempo
        printf("Voce quer converter de segundos, minutos ou horas? (Digite 'sair' para encerrar): ");
        scanf("%s", unidade);

        // Encerra o programa se o usuário digitar "sair"
        if (strcmp(unidade, "sair") == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        // Verificação de qual unidade foi escolhida
        if (strcmp(unidade, "segundos") == 0) {
            printf("Digite a quantidade de segundos: ");
            scanf("%lf", &valor);

            double minutos = valor / 60.0; // Convertendo segundos para minutos
            double horas = valor / 3600.0; // Convertendo segundos para horas

            printf("%.2lf segundos equivalem a %.2lf minutos e %.2lf horas.\n\n", valor, minutos, horas);

        } else if (strcmp(unidade, "minutos") == 0) {
            printf("Digite a quantidade de minutos: ");
            scanf("%lf", &valor);

            double segundos = valor * 60.0; // Convertendo minutos para segundos
            double horas = valor / 60.0;    // Convertendo minutos para horas

            printf("%.2lf minutos equivalem a %.2lf segundos e %.2lf horas.\n\n", valor, segundos, horas);

        } else if (strcmp(unidade, "horas") == 0) {
            printf("Digite a quantidade de horas: ");
            scanf("%lf", &valor);

            double minutos = valor * 60.0; // Convertendo horas para minutos
            double segundos = valor * 3600.0; // Convertendo horas para segundos

            printf("%.2lf horas equivalem a %.2lf minutos e %.2lf segundos.\n\n", valor, minutos, segundos);

        } else {
            // Caso a entrada seja inválida
            printf("Unidade desconhecida. Por favor, escolha entre 'segundos', 'minutos' ou 'horas'.\n\n");
        }
    }

    return 0;
}

#endif // Finaliza a definição de CONVERSORES_H.



