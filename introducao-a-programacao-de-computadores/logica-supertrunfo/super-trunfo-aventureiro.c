#include <stdio.h>
#include <string.h>

int main() {
    int populacao1, populacao2, numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;
    char nome_cidade1[30], nome_cidade2[30], codigo_carta1[30], codigo_carta2[30], estado_carta1[30], estado_carta2[30];
    float area_carta1, area_carta2, pib_carta1, pib_carta2;
    float densidade_populacional_carta1, densidade_populacional_carta2;
    float pib_per_capita_carta1, pib_per_capita_carta2;
    int opcao;

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado_carta1);
    printf("Digite o estado da carta 2: ");
    scanf("%s", estado_carta2);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo_carta1);
    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nome_cidade1);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area_carta1);
    printf("Digite a area da carta 2: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_carta1);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib_carta2);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &numero_pontos_turisticos_carta1);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &numero_pontos_turisticos_carta2);

    densidade_populacional_carta1 = populacao1 / area_carta1;
    densidade_populacional_carta2 = populacao2 / area_carta2;

    pib_per_capita_carta1 = pib_carta1 / populacao1;
    pib_per_capita_carta2 = pib_carta2 / populacao2;

    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta 1) vs %s (Carta 2)\n", nome_cidade1, nome_cidade2);

    switch (opcao) {
        case 1:
            printf("Comparacao escolhida: Populacao\n");
            printf("%s: %d habitantes\n", nome_cidade1, populacao1);
            printf("%s: %d habitantes\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: Carta 1 (%s)\n", nome_cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: Carta 2 (%s)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparacao escolhida: Area\n");
            printf("%s: %.2f km²\n", nome_cidade1, area_carta1);
            printf("%s: %.2f km²\n", nome_cidade2, area_carta2);
            if (area_carta1 > area_carta2)
                printf("Vencedor: Carta 1 (%s)\n", nome_cidade1);
            else if (area_carta2 > area_carta1)
                printf("Vencedor: Carta 2 (%s)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparacao escolhida: PIB\n");
            printf("%s: R$ %.2f\n", nome_cidade1, pib_carta1);
            printf("%s: R$ %.2f\n", nome_cidade2, pib_carta2);
            if (pib_carta1 > pib_carta2)
                printf("Vencedor: Carta 1 (%s)\n", nome_cidade1);
            else if (pib_carta2 > pib_carta1)
                printf("Vencedor: Carta 2 (%s)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparacao escolhida: Numero de Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome_cidade1, numero_pontos_turisticos_carta1);
            printf("%s: %d pontos\n", nome_cidade2, numero_pontos_turisticos_carta2);
            if (numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2)
                printf("Vencedor: Carta 1 (%s)\n", nome_cidade1);
            else if (numero_pontos_turisticos_carta2 > numero_pontos_turisticos_carta1)
                printf("Vencedor: Carta 2 (%s)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparacao escolhida: Densidade Demografica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nome_cidade1, densidade_populacional_carta1);
            printf("%s: %.2f hab/km²\n", nome_cidade2, densidade_populacional_carta2);
            if (densidade_populacional_carta1 < densidade_populacional_carta2)
                printf("Vencedor: Carta 1 (%s)\n", nome_cidade1);
            else if (densidade_populacional_carta2 < densidade_populacional_carta1)
                printf("Vencedor: Carta 2 (%s)\n", nome_cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
