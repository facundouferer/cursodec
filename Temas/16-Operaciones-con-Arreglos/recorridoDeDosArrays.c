#include <stdio.h>

int main()
{
  int numeros1[3] = {3, 2, 5};
  int numeros2[3] = {1, 4, 6};

  int resultado;
  // Recorrido: mostrar cada número
  int arrayFinal[4];
  int sumatoria = 0;

  for (int i = 0; i < 3; i++)
  {
    resultado = numeros1[i] * numeros2[i];
    printf("%d x %d = %d\n", numeros1[i], numeros2[i], resultado);
    arrayFinal[i] = resultado;
    sumatoria += resultado;
  }

  arrayFinal[3] = sumatoria;

  for (int i = 0; i < 4; i++)
  {
    printf("%d ", arrayFinal[i]);
  }

  return 0;
}