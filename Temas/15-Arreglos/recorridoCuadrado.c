#include <stdio.h>

int main()
{
  int numeros[] = {3, 2, 1, 5, 2, 9, 2};

  int resultado;
  int tamanioTotal = sizeof(numeros);
  printf("Tamaño total del arreglo: %d bytes\n", tamanioTotal);
  int tamanioElemento = sizeof(numeros[0]);
  printf("Tamaño de cada elemento: %d bytes\n", tamanioElemento);

  for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++)
  {
    resultado = numeros[i] * numeros[i];
    printf("%d ", resultado);
  }

  return 0;
}