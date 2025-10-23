#include <stdio.h>

#define TAM 10 
#define TAM_NAVIO 3 
#define TAM_HAB 5 

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio1[TAM_NAVIO] = {3, 3, 3};
    int navio2[TAM_NAVIO] = {3, 3, 3};

    int linha_h = 2, coluna_h = 1;
    int linha_v = 6, coluna_v = 4;

    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_h][coluna_h + i] = navio1[i];

    for (i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha_v + i][coluna_v] = navio2[i];

    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            if (j >= (TAM_HAB / 2 - i) && j <= (TAM_HAB / 2 + i))
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            if (i == TAM_HAB / 2 || j == TAM_HAB / 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            if (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    int origem_cone_l = 1, origem_cone_c = 7;
    int origem_cruz_l = 5, origem_cruz_c = 2;
    int origem_octa_l = 7, origem_octa_c = 7;

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            int linha = origem_cone_l + i - TAM_HAB / 2;
            int coluna = origem_cone_c + j - TAM_HAB / 2;

            if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            int linha = origem_cruz_l + i - TAM_HAB / 2;
            int coluna = origem_cruz_c + j - TAM_HAB / 2;

            if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    for (i = 0; i < TAM_HAB; i++) {
        for (j = 0; j < TAM_HAB; j++) {
            int linha = origem_octa_l + i - TAM_HAB / 2;
            int coluna = origem_octa_c + j - TAM_HAB / 2;

            if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    printf("\n=== TABULEIRO COM HABILIDADES ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
