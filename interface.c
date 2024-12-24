#include <stdio.h>
#include "temperatura.h" // Inclui o cabeçalho com as funções de conversão.

int main() {
    int escolha;

    do {
        printf("\n===== Menu de Conversores =====\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Unidades de Comprimento\n");
        printf("3. Unidades de Massa\n");
        printf("4. Unidades de Volume\n");
        printf("5. Unidades de Velocidade\n");
        printf("6. Watts, kW, e CV\n");
        printf("7. Unidades de Área\n");
        printf("8. Unidades de Tempo\n");
        printf("9. Bits, Bytes, KB, MB, GB, TB\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                converterTemperatura();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
               
                break;
            case 7:
               
                break;
            case 8:
               
                break;
            case 9:

                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}
