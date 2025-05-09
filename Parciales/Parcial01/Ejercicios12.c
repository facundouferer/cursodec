#include <stdio.h>

int main()
{
  int num;
  int suma = 0, contador = 0;
  printf("Ingresar el número:");
  scanf("%d", &num);
  while (num > 0)
  {
    suma += num;
    contador++;
    if (num > 100)
    {
      printf("Número grande ingresado\n");
    }
    printf("Ingresar el número:");
    scanf("%d", &num);
  }

  if (contador > 0)
  {
    float promedio = (float)suma / contador;
    printf("Promedio: %.2f\n", promedio);
  }
  else
  {
    printf("No se ingresaron números válidos\n");
  }

  return 0;
}