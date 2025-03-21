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

  printf("Fin del programa.\n");

  return 0;
}