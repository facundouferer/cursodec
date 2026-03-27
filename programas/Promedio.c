#include <stdio.h>
#include <math.h>
int main()
{
  int num, cont = 0;
  int limite;
  float total = 0.0;

  printf("Ingrese el número de notas: ");
  scanf("%d", &limite);

  while (cont < limite)
  {
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    if (num < 0 || num > 10)
    {
      printf("Error: El numero debe estar entre 0 y 10.\n");
    }
    else
    {
      total += num;
      cont++;
    }
  }

  float promedio = total / cont;
  printf("El promedio es: %.2f\n", promedio);

  return 0;
}