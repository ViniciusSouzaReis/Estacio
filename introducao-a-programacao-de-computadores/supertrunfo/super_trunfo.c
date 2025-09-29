#include <stdio.h>

int main() {
  char estado1, estado2;
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  int pontos_turisticos1, pontos_turisticos2;
  unsigned long int populacao1, populacao2;
  float area1, pib1, area2, pib2;

  printf("Digite o Estado da Carta 1: ");
  scanf("%c", &estado1);

  printf("Digite o Código da Carta 1: ");
  scanf(" %s", codigo1);

  printf("Digite a Cidade da Carta 1: ");
  scanf(" %s", cidade1);

  printf("Digite a População da Carta 1: ");
  scanf("%lu", &populacao1);

  printf("Digite a quantidade de Pontos Turísticos da Carta 1: ");
  scanf("%d", &pontos_turisticos1);

  printf("Digite a Área (em km²) da Carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da Carta 1: ");
  scanf("%f", &pib1);

  printf("\n");

  printf("Digite o Estado da Carta 2: ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta 2: ");
  scanf(" %s", codigo2);

  printf("Digite a Cidade da Carta 2: ");
  scanf(" %s", cidade2);

  printf("Digite a População da Carta 2: ");
  scanf("%lu", &populacao2);

  printf("Digite a quantidade de Pontos Turísticos da Carta 2: ");
  scanf("%d", &pontos_turisticos2);

  printf("Digite a Área (em km²) da Carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da Carta 2: ");
  scanf("%f", &pib2);

  printf("\n");

  float densidadepopulacional1 = (float) populacao1 / area1;
  float densidadepopulacional2 = (float) populacao2 / area2;

  float pibpercapita1 = (float) pib1 / populacao1;
  float pibpercapita2 = (float) pib2 / populacao2;

  float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpercapita1 + (area1 / (float)populacao1);
  float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpercapita2 + (area2 / (float)populacao2);
  
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %f habitantes/km²\n", densidadepopulacional1);
  printf("PIB per capita: %.2f\n", pibpercapita1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %f habitantes/km²\n", densidadepopulacional2);
  printf("PIB per capita: %.2f\n\n", pibpercapita2);

  printf("Comparação de Cartas:\n\n");

  int carta1_venceu;

  carta1_venceu = populacao1 > populacao2 ? 1 : 0;
  printf("População: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = area1 > area2 ? 1 : 0;
  printf("Área: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = pib1 > pib2 ? 1 : 0;
  printf("PIB: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = pibpercapita1 > pibpercapita2 ? 1 : 0;
  printf("PIB per Capita: Carta %d venceu (%d)\n", carta1_venceu ? 1 : 2, carta1_venceu);

  carta1_venceu = superpoder1 > superpoder2 ? 1 : 0;
  printf("Super Poder: Carta %d venceu (%d)\n\n", carta1_venceu ? 1 : 2, carta1_venceu);

  return 0;
}