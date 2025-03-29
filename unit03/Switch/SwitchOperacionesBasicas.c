#include <stdio.h>

int main()
{

  int opcion;
  float numeroUno, numeroDos, resultado;

  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");

  printf("Seleccione una opción (1-4): ");
  scanf("%d", &opcion);

  printf("Ingrese el primer numero: ");
  scanf("%f", &numeroUno);

  printf("Ingrese el segundo numero: ");
  scanf("%f", &numeroDos);

  switch (opcion)
  {
  case 1:
    resultado = numeroUno + numeroDos;
    printf("El resultado de la suma es: %.2f\n", resultado);
    break;
  case 2:
    resultado = numeroUno - numeroDos;
    printf("El resultado de la resta es: %.2f\n", resultado);
    break;
  case 3:
    resultado = numeroUno * numeroDos;
    printf("El resultado de la multiplicación es: %.2f\n", resultado);
    break;
  case 4:
    if (numeroDos != 0)
    {
      resultado = numeroUno / numeroDos;
      printf("El resultado de la división es: %.2f\n", resultado);
    }
    else
    {
      printf("No se puede dividir entre cero.\n");
    }
    break;
  default:
    printf("Opción inválida.\n");
  }
  return 0;
}