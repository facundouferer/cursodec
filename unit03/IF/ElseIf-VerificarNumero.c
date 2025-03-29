#include <stdio.h>

int main()
{
  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  if (numero > 0)
  {
    printf("El número es positivo.\n");
  }
  else
  {
    printf("El número es negativo o cero.\n");
  }

  return 0;
}