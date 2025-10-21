#include <stdio.h>

int main() {
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    char cidade1[30], cidade2[30];
    int escolha1, escolha2;

    float valor1_atributo1, valor2_atributo1, valor1_atributo2, valor2_atributo2;
    float soma1, soma2;

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);
    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos1);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\n===== MENU DE ATRIBUTOS =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    (escolha1 != 1) ? printf("1 - Populacao\n") : 0;
    (escolha1 != 2) ? printf("2 - Area\n") : 0;
    (escolha1 != 3) ? printf("3 - PIB\n") : 0;
    (escolha1 != 4) ? printf("4 - Pontos Turisticos\n") : 0;
    (escolha1 != 5) ? printf("5 - Densidade Demografica\n") : 0;

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    switch (escolha1) {
        case 1:
            valor1_atributo1 = (float)populacao1;
            valor2_atributo1 = (float)populacao2;
            break;
        case 2:
            valor1_atributo1 = area1;
            valor2_atributo1 = area2;
            break;
        case 3:
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            break;
        case 4:
            valor1_atributo1 = (float)pontos1;
            valor2_atributo1 = (float)pontos2;
            break;
        case 5:
            valor1_atributo1 = densidade1;
            valor2_atributo1 = densidade2;
            break;
    }

    switch (escolha2) {
        case 1:
            valor1_atributo2 = (float)populacao1;
            valor2_atributo2 = (float)populacao2;
            break;
        case 2:
            valor1_atributo2 = area1;
            valor2_atributo2 = area2;
            break;
        case 3:
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            break;
        case 4:
            valor1_atributo2 = (float)pontos1;
            valor2_atributo2 = (float)pontos2;
            break;
        case 5:
            valor1_atributo2 = densidade1;
            valor2_atributo2 = densidade2;
            break;
    }

    valor1_atributo1 = (escolha1 == 5) ? -valor1_atributo1 : valor1_atributo1;
    valor2_atributo1 = (escolha1 == 5) ? -valor2_atributo1 : valor2_atributo1;

    valor1_atributo2 = (escolha2 == 5) ? -valor1_atributo2 : valor1_atributo2;
    valor2_atributo2 = (escolha2 == 5) ? -valor2_atributo2 : valor2_atributo2;

    soma1 = valor1_atributo1 + valor1_atributo2;
    soma2 = valor2_atributo1 + valor2_atributo2;

    printf("\n===== RESULTADO DA COMPARACAO =====\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nAtributo 1: ");
    (escolha1 == 1) ? printf("Populacao\n") :
    (escolha1 == 2) ? printf("Area\n") :
    (escolha1 == 3) ? printf("PIB\n") :
    (escolha1 == 4) ? printf("Pontos Turisticos\n") :
    printf("Densidade Demografica\n");

    printf("%s: %.2f\n", cidade1, (escolha1 == 5) ? -valor1_atributo1 : valor1_atributo1);
    printf("%s: %.2f\n", cidade2, (escolha1 == 5) ? -valor2_atributo1 : valor2_atributo1);

    printf("\nAtributo 2: ");
    (escolha2 == 1) ? printf("Populacao\n") :
    (escolha2 == 2) ? printf("Area\n") :
    (escolha2 == 3) ? printf("PIB\n") :
    (escolha2 == 4) ? printf("Pontos Turisticos\n") :
    printf("Densidade Demografica\n");

    printf("%s: %.2f\n", cidade1, (escolha2 == 5) ? -valor1_atributo2 : valor1_atributo2);
    printf("%s: %.2f\n", cidade2, (escolha2 == 5) ? -valor2_atributo2 : valor2_atributo2);

    printf("\nSomas:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    printf("\nResultado: ");
    (soma1 > soma2) ? printf("Vencedor: Carta 1 (%s)\n", cidade1) :
    (soma2 > soma1) ? printf("Vencedor: Carta 2 (%s)\n", cidade2) :
    printf("Empate!\n");

    return 0;
}
