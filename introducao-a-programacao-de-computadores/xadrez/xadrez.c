#include <stdio.h>

int main() {
    int casas_torre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do Bispo (5 casas na Diagonal: Cima e Direita):\n");
    
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador_bispo);
        contador_bispo++;
    }

    printf("\n");

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda (%d)\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
