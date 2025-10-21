#include <stdio.h>

int main() {
  int a = 5, b = 10, c = 15;

  if (a < b && b < c) {
      printf("A < B < C\n");
  } else if (a < b || b > c) {
      printf("A < B ou B > C\n");

  } else {
      printf("Nao A > B\n");
  }
  
  return 0;
}