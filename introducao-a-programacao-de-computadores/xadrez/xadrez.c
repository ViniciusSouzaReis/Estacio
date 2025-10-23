#include <stdio.h>

void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Direita (%d)\n", casas_restantes);
    moverTorre(casas_restantes - 1);
}

void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Esquerda (%d)\n", casas_restantes);
    moverRainha(casas_restantes - 1);
}

void moverBispo(int movimento_vertical, int movimento_horizontal) {
    if (movimento_vertical == 0) {
        return;
    }

    for (int i = 1; i <= movimento_horizontal; i++) {
        printf("Cima, Direita (Passo vertical %d, horizontal %d)\n", movimento_vertical, i);
    }

    moverBispo(movimento_vertical - 1, movimento_horizontal);
}

void moverCavalo() {
    int movimentos_cima = 2;
    int movimentos_direita = 1;

    printf("Movimento do Cavalo (em 'L': duas casas para Cima e uma para a Direita):\n");

    for (int i = 1, j = 1; i <= movimentos_cima || j <= movimentos_direita; i++, j++) {
        if (i <= movimentos_cima) {
            printf("Cima (%d)\n", i);
        } else if (j <= movimentos_direita) {
            if (j == 1) {
                printf("Direita (%d)\n", j);
            }
        }

        if (i > movimentos_cima && j > movimentos_direita) {
            break;
        }

        if (i == 1 && j == 1) {
            continue;
        }
    }
}

int main() {
    int casas_torre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(casas_torre);
    printf("\n");

    int movimento_vertical = 5;
    int movimento_horizontal = 1;
    printf("Movimento do Bispo (5 casas na Diagonal: Cima e Direita):\n");
    moverBispo(movimento_vertical, movimento_horizontal);
    printf("\n");

    int casas_rainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(casas_rainha);
    printf("\n");

    moverCavalo();

    printf("\nSimulação concluída!\n");
    return 0;
}
