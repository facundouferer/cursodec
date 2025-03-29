#include <stdio.h>

int main()
{
  int suma = 0;

  for (int i = 1; i <= 10; i++)
  {
    suma += i; // Se acumula la suma de los números
  }

  printf("La suma de los primeros 10 números es: %d\n", suma);

  return 0;
}