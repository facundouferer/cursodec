#include <stdio.h>

// constantes para definir el tamaño de la matriz
#define FILAS 3
#define COLUMNAS 3

int main(void)
{
  int matriz[FILAS][COLUMNAS] = {
      {3, 4, 8},
      {9, 1, 2},
      {6, 5, 7}};

  int total = FILAS * COLUMNAS;
  int valores[total];
  int i, j;

  // Transformar la matriz a un arreglo lineal.
  int cont = 0;
  for (i = 0; i < FILAS; i++)
  {
    for (j = 0; j < COLUMNAS; j++)
    {
      valores[cont] = matriz[i][j];
      cont++;
    }
  }

  // Ordenamiento por Burbuja.
  for (i = 0; i < total - 1; i++)
  {
    for (j = i + 1; j < total; j++)
    {
      if (valores[i] > valores[j])
      {
        int tmp = valores[i];
        valores[i] = valores[j];
        valores[j] = tmp;
      }
    }
  }
  cont = 0;

  // Copiar los valores ordenados de vuelta en la matriz.
  for (i = 0; i < FILAS; i++)
  {
    for (j = 0; j < COLUMNAS; j++)
    {
      matriz[i][j] = valores[cont];
      cont++;
    }
  }

  // Imprimir la matriz ordenada.
  for (i = 0; i < FILAS; i++)
  {
    for (j = 0; j < COLUMNAS; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
