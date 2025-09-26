#include <stdio.h>

int main() {
  char estado1, estado2;
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
  float area1, pib1, area2, pib2;

  printf("Digite o Estado da Carta 1: ");
  scanf("%c", &estado1);

  printf("Digite o Código da Carta 1: ");
  scanf(" %s", codigo1);

  printf("Digite a Cidade da Carta 1: ");
  scanf(" %s", cidade1);

  printf("Digite a População da Carta 1: ");
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite a quantidade de Pontos Turísticos da Carta 2: ");
  scanf("%d", &pontos_turisticos2);

  printf("Digite a Área (em km²) da Carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da Carta 2: ");
  scanf("%f", &pib2);

  printf("\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos2);
  return 0;
}