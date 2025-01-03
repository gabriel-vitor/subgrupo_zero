#include <stdio.h>
#include <stdlib.h>
#include "temperatura.h" // Inclui o cabeçalho com as funções de conversão.
#include "tempo.h"
#include "area.h"
#include "massa.h"
#include "velocidade.h"
#include "watts.h"
#include "bytes.h"
#include "metros.h"

void clear() {
    #ifdef _WIN32
            system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int escolha;

    do {
        clear();
        printf("===== Menu de Conversores =====\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Conversor de Massa\n");
        printf("3. Conversor de Velocidade\n");
        printf("4. Conversor de Potencia\n");
        printf("5. Conversor de Area\n");
        printf("6. Conversor de Tempo\n");
        printf("7. Conversor de Bytes\n");
        printf("8. Conversor de Metros cubicos\n");
        printf("0. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);

        clear();
        switch (escolha) {
            case 1:
                converterTemperatura();
                break;
            case 2:
                converterMassa();
                break;
            case 3:
                converterVelocidade();
                break;
            case 4:
                conversorWatts();
                break;
            case 5:
                converterArea();
                break;
            case 6:
                converterTempo();
                break;
            case 7:
                conversorBytesMenu();
                break;
            case 8:
                conversorVolume();
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
