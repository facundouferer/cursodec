#include <stdio.h>

int main()
{
  int numeroUno;
  int numeroDos;

  printf("Ingrese el primer número: ");
  scanf("%d", &numeroUno);
  printf("Ingrese el segundo número: ");
  scanf("%d", &numeroDos);

  if (numeroUno > numeroDos)
  {
    printf("El primer número es mayor que el segundo.\n");
  }
  else if (numeroUno < numeroDos)
  {
    printf("El primer número es menor que el segundo.\n");
  }
  else
  {
    printf("Los números son iguales.\n");
  }
  return 0;
}