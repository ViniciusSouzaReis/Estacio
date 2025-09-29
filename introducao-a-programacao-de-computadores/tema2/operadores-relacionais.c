#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;

  printf("a > b: %d\n", a > b);
  printf("a < b: %d\n", a < b);
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);

  return 0;
}

int main() {
  int x = 5;
  float y = 5.0;

  printf("x == y: %d\n", x == y);
  printf("x != y: %d\n", x != y);

  return 0;
}

int main() {
  int num = 10;
  float result = 10.0;

  int comparison = (float)num == result;

  printf("num == result: %d\n", comparison);

  return 0;
}