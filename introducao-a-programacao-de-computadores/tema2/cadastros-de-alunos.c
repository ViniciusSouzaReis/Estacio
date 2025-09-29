#include <stdio.h>

int main () {
  int idade, matricula;
  float altura;
  char nome[50];

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura);

  printf("Digite sua matrícula: ");
  scanf("%d", &matricula);

  printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
  printf("Idade: %d anos - Altura: %.2f m\n", idade, altura);

  return 0;
}