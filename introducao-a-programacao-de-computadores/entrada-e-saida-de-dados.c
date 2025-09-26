#include <stdio.h>

int main() {
  int idade;
  char nome[50];

  printf("Digite sua idade: ");
  scanf("%d", &idade); //o & é necessário para passar o endereço da variável

  printf("Digite seu nome: ");
  scanf("%s", nome); //não é necessário o & para strings

  printf("Olá, %s! Você tem %d anos.\n", nome, idade);
  return 0;

  /*
    printf: função para imprimir na tela
    scanf: função para ler dados do teclado
    %d: placeholder para inteiros
    %s: placeholder para strings
    %f: placeholder para float padrão
    %e: placeholder para float em notação científica
    %c: placeholder unico caractere
    %i: placeholder para inteiros (aceita decimal, hexadecimal e octal)
    \n: nova linha
    &: operador de endereço, usado para passar o endereço da variável
  */
}