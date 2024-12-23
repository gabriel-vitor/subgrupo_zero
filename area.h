#ifndef AREA_H
#define AREA_H 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// Funções para conversão entre unidades de área

// Metros² para Centímetros²
float metrosParaCentimetros(float metrosQuadrados) {
    return metrosQuadrados * 10000;
}

// Metros² para Milímetros²
float metrosParaMilimetros(float metrosQuadrados) {
    return metrosQuadrados * 1000000;
}
// Centímetros² para Metros²
float centimetrosParaMetros(float centimetrosQuadrados) {
    return centimetrosQuadrados / 10000;
}

// Milímetros² para Metros²
float milimetrosParaMetros(float milimetrosQuadrados) {
    return milimetrosQuadrados / 1000000;
}

// Centímetros² para Milímetros²
float centimetrosParaMilimetros(float milimetrosQuadrados2) {
    return milimetrosQuadrados2 * 100;
}

// Milímetros² para Centímetros²
float milimetrosParaCentimetros(float centimetrosQuadrados2) {
    return centimetrosQuadrados2 / 100;
}

void converterArea() {
    int opcao;
    float valor, resultado;
    char continuar;

    //Para a acentuação
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    //Primeiro do é para retornar caso deseje outra conversão
    //Segundo do garante que se for selecionado uma opção errada permita a correção do usuário
    do {
    do
    {
    //As opções de conversão
    printf("Conversor de Unidades de Área\n");
    printf("Escolha uma opção:\n");
    printf("1 - Metros quadrados para Centímetros quadrados\n");
    printf("2 - Metros quadrados para Milímetros quadrados\n");
    printf("3 - Centímetros quadrados para Metros quadrados\n");
    printf("4 - Milímetros quadrados para Metros quadrados\n");
    printf("5 - Centímetros quadrados para Milímetros quadrados\n");
    printf("6 - Milímetros quadrados para Centímetros quadrados\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    //verificar a opção
    if (opcao<1 || opcao>6 ){

    printf("Opção inválida!\n");

    }

    } while (opcao < 1 || opcao > 6);
    
    printf("Digite o valor: ");
    scanf("%f", &valor);

    //O seletor 
    switch (opcao) {
        case 1:
            resultado = metrosParaCentimetros(valor);
            printf("%.4f metros quadrados equivalem a %.6f centímetros quadrados.\n", valor, resultado);
            break;
        case 2:
            resultado = metrosParaMilimetros(valor);
            printf("%.4f metros quadrados equivalem a %.6f milímetros quadrados.\n", valor, resultado);
            break;
        case 3:
            resultado = centimetrosParaMetros(valor);
            printf("%.4f centímetros quadrados equivalem a %.6f metros quadrados.\n", valor, resultado);
            break;
        case 4:
            resultado = milimetrosParaMetros(valor);
            printf("%.4f milímetros quadrados equivalem a %.6f metros quadrados.\n", valor, resultado);
            break;
        case 5:
            resultado = centimetrosParaMilimetros(valor);
            printf("%.4f centímetros quadrados equivalem a %.6f milímetros quadrados.\n", valor, resultado);
            break;

        case 6:
            resultado = milimetrosParaCentimetros(valor);
            printf("%.4f milímetros quadrados equivalem a %.6f centímetros quadrados.\n", valor, resultado);
            break;
        
    }
  
    printf("\nDeseja realizar outra conversão? (S/N): ");
        scanf(" %c", &continuar);

} while (continuar == 'S' || continuar == 's');

 printf("\nConversão concluída com sucesso!\n");
 
}

#endif