#include <stdio.h>

int main() {
  int idade;
  int quantidade;
  float altura;
  double peso; //armazena valores com mais casas decimais
  char letra;
  char nome[50];

  //declarando e atribuindo valores
  idade = 20;
  quantidade = 5;
  altura = 1.75;
  peso = 70.5;
  letra = 'A';
  //nome = "Vinicius"; //não é possível atribuir valor assim em C
  //é necessário usar a função strcpy da biblioteca string.h
  //strcpy(nome, "Vinicius");
  //ou inicializar na declaração
  char nome2[50] = "Vinicius";
}