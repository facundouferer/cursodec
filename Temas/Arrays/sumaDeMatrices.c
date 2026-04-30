#include <stdio.h>

int main()
{
  int matriz1[3][3];
  int matriz2[3][3];

  printf("ingresa los valores de la matriz 1: \n");
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      printf("[%d][%d]: ", x, y);
      scanf("%d", &matriz1[x][y]);
    }
    printf("\n");
  }

  printf("ingresa los valores de la matriz 2: \n");
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      printf("[%d][%d]: ", x, y);
      scanf("%d", &matriz2[x][y]);
    }
    printf("\n");
  }

  // Recorrer la matriz y la va a sumar
  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      printf("\t %d ", matriz1[x][y] + matriz2[x][y]);
    }
    printf("\n");
  }

  return 0;
}