#include <stdio.h>

int main () {
  int populacao1, populacao2, numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;
  char nome_cidade1[30], nome_cidade2[30], codigo_carta1[30], codigo_carta2[30], estado_carta1[30], estado_carta2[30];
  float area_carta1, area_carta2, pib_carta1, pib_carta2, densidade_populacional_carta1, densidade_populacional_carta2, pib_per_capita_carta1, pib_per_capita_carta2;

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
  printf("Digite o nome da cidade da carta 2:");
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

  densidade_populacional_carta1 = populacao1 / area_carta1;
  densidade_populacional_carta2 = populacao2 / area_carta2;

  pib_per_capita_carta1 = pib_carta1 / populacao1;
  pib_per_capita_carta2 = pib_carta2 / populacao2;

  if (pib_carta1 > pib_carta2) {
    printf("Comparacao escolhida: PIB\n");
    printf("Carta 1 vence: PIB = %.2f vs Carta 2 = %.2f\n", pib_carta1, pib_carta2);
  } 
  
  if (populacao1 > populacao2) {
    printf("Comparacao escolhida: Populacao\n");
    printf("Carta 1 vence: Populacao = %d vs Carta 2 = %d\n", populacao1, populacao2);
  } else if (populacao2 > populacao1) {
    printf("Comparacao escolhida: Populacao\n");
    printf("Carta 2 vence: Populacao = %d vs Carta 1 = %d\n", populacao2, populacao1);
  }

  if (area_carta1 > area_carta2) {
    printf("Comparacao escolhida: Area\n");
    printf("Carta 1 vence: Area = %.2f vs Carta 2 = %.2f\n", area_carta1, area_carta2);
  } else if (area_carta2 > area_carta1) {
    printf("Comparacao escolhida: Area\n");
    printf("Carta 2 vence: Area = %.2f vs Carta 1 = %.2f\n", area_carta2, area_carta1);
  }

  if (densidade_populacional_carta1 < densidade_populacional_carta2) {
    printf("Comparacao escolhida: Densidade Populacional\n");
    printf("Carta 1 vence: Densidade Populacional = %.2f vs Carta 2 = %.2f\n", densidade_populacional_carta1, densidade_populacional_carta2);
  } else if (densidade_populacional_carta2 < densidade_populacional_carta1) {
    printf("Comparacao escolhida: Densidade Populacional\n");
    printf("Carta 2 vence: Densidade Populacional = %.2f vs Carta 1 = %.2f\n", densidade_populacional_carta2, densidade_populacional_carta1);
  }

  return 0;
}