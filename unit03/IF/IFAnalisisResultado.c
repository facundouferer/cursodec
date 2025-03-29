#include <stdio.h>

int main()
{

  int numeroUno, numeroDos;
  printf("Ingrese el primer numero: ");
  scanf("%d", &numeroUno);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &numeroDos);

  int resultado = numeroUno - numeroDos;

  if ((resultado) < 0)
  {
    printf("El resultado es negativo.\n");
  }
  else
  {
    if ((resultado) > 0)
    {
      printf("El resultado es positivo.\n");
    }
    else
    {
      printf("El resultado es cero.\n");
    }
  }

  printf("Fin del programa.\n");

  return 0;
}