#include <stdio.h>
 
int main() {
  for (int i = 100; i >= 0; i -= 10) {
    printf("%d\n", i);
  }
  printf("Fim do loop.\n");
  return 0;
}