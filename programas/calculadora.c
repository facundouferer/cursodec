#include <stdio.h>

int main()
{
  int num1, num2, opcion;
  float resultado;

  printf("Ingrese la operación que desea realizar:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("Opción: ");
  scanf("%d", &opcion);

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);

  if (opcion == 1)
  {
    resultado = num1 + num2;
    printf("%d + %d = %.2f\n", num1, num2, resultado);
  }
  else if (opcion == 2)
  {
    resultado = num1 - num2;
    printf("%d - %d = %.2f\n", num1, num2, resultado);
  }
  else if (opcion == 3)
  {
    resultado = num1 * num2;
    printf("%d * %d = %.2f\n", num1, num2, resultado);
  }
  else if (num2 > 0 && opcion == 4)
  {
    resultado = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, resultado);
  }
  else
  {
    printf("Error: No se puede dividir por cero.\n");
  }

  return 0;
}