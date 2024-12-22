#ifndef TEMPERATURA_H  // Verifica se TEMPERATURA_H já foi definido para evitar redefinição.
#define TEMPERATURA_H  // Define o identificador TEMPERATURA_H.

#include <stdio.h>  // Biblioteca padrão para entrada e saída.

// Função para conversão de temperatura
void converterTemperatura() {
    int opcao;         // Variável para armazenar a opção escolhida pelo usuário.
    float temperatura; // Variável para armazenar a temperatura informada pelo usuário.
    float resultado;   // Variável para armazenar o resultado da conversão.

    printf("\n--- Conversão de Temperaturas ---\n"); // Exibe o cabeçalho da seção.
    printf("1. Celsius para Fahrenheit\n");         // Opção 1.
    printf("2. Fahrenheit para Celsius\n");         // Opção 2.
    printf("3. Celsius para Kelvin\n");             // Opção 3.
    printf("4. Kelvin para Celsius\n");             // Opção 4.
    printf("5. Fahrenheit para Kelvin\n");          // Opção 5.
    printf("6. Kelvin para Fahrenheit\n");          // Opção 6.
    printf("Digite sua escolha (1-6): ");           // Solicita a escolha do usuário.
    scanf("%d", &opcao);                            // Lê a opção escolhida.

                         // Lê a temperatura informada.

    switch (opcao) {
        case 1: // Celsius para Fahrenheit
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperatura, resultado);
            break;
        case 2: // Fahrenheit para Celsius
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperatura, resultado);
            break;
        case 3: // Celsius para Kelvin
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = temperatura + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", temperatura, resultado);
            break;
        case 4: // Kelvin para Celsius
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            resultado = temperatura - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", temperatura, resultado);
            break;
        case 5: // Fahrenheit para Kelvin
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = ((temperatura - 32.0) * 5.0 / 9.0) + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temperatura, resultado);
            break;
        case 6: // Kelvin para Fahrenheit
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            resultado = ((temperatura - 273.15) * 9.0 / 5.0) + 32.0;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temperatura, resultado);
            break;
        default: // Caso inválido
            printf("Opção inválida!\n");
            break;
    }
}

#endif // Finaliza a definição de CONVERSORES_H.
