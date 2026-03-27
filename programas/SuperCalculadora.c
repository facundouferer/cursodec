#include <stdio.h>
#include <math.h>

int main()
{
  double num1, num2;
  int opcion;

  printf("Selecciones una operacion:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicacion\n");
  printf("4. Division\n");
  printf("5. Potencia\n");
  printf("6. Raiz cuadrada\n");
  printf("Opcion: ");
  scanf("%d", &opcion);

  printf("Ingrese el primer numero: ");
  scanf("%lf", &num1);
  if (opcion != 6)
  {
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
  }

  float suma, resta, multiplicacion, division;

  switch (opcion)
  {
  case 1:
    suma = num1 + num2;
    printf(" %.2f + %.2f = %.2f\n", num1, num2, suma);
    break;
  case 2:
    resta = num1 - num2;
    printf(" %.2f - %.2f = %.2f\n", num1, num2, resta);
    break;
  case 3:
    multiplicacion = num1 * num2;
    printf(" %.2f * %.2f = %.2f\n", num1, num2, multiplicacion);
    break;
  case 4:
    if (num2 != 0)
    {
      division = num1 / num2;
      printf(" %.2f / %.2f = %.2f\n", num1, num2, division);
    }
    else
    {
      printf("Error: No se puede dividir por cero.\n");
    }
    break;
  case 5:
    double potencia = pow(num1, num2);
    printf(" %.2f ^ %.2f = %.2f\n", num1, num2, potencia);
    break;
  case 6:
    if (num1 >= 0)
    {
      double raiz = sqrt(num1);
      printf("Raiz cuadrada de %.2f = %.2f\n", num1, raiz);
    }
    else
    {
      printf("Error: No se puede calcular raiz cuadrada de numero negativo.\n");
    }
    break;
  default:
    printf("Opcion no valida.\n");
  }

  return 0;
}
