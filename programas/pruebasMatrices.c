#include <stdio.h>

int main(void)
{
  int numeros[] = {10, 20, 30, 40, 50};

  printf("%d\n", sizeof(numeros));

  printf("%d\n", sizeof(numeros[0]));

  int size = sizeof(numeros) / sizeof(numeros[0]);

  printf("%d\n", size);

  return 0;
}