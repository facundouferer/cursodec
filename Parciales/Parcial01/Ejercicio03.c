#include <stdio.h>

int main()
{
  int a = 8;
  int b = 4;
  int resultado;

  resultado = a + b; // Línea 1
  printf("Resultado 1: %d\n", resultado);

  if (a > b)
  { // Línea 2
    printf("a es mayor que b\n");
  }

  if (a > 0 && b > 0)
  { // Línea 3
    printf("Ambos son positivos\n");
  }

  return 0;
}
