#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opcao:\n");
  printf("1. Adicao\n");
  printf("2. Subtracao\n");
  printf("3. Multiplicacao\n");
  printf("4. Divisao\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Voce escolheu Adicao\n");
      break;
    case 2:
      printf("Voce escolheu Subtracao\n");
      break;
    case 3:
      printf("Voce escolheu Multiplicacao\n");
      break;
    case 4:
      printf("Voce escolheu Divisao\n");
      break;
    default:
      printf("Opcao invalida\n");
  }

  return 0;
}