#include <stdio.h>

int main()
{
  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  if (numero > 0)
  { // Primer if
    printf("El número es positivo.\n");
  }
  else
  {
    if (numero < 0)
    { // Segundo if dentro del else
      printf("El número es negativo.\n");
    }
    else
    {
      printf("El número es cero.\n"); // Se ejecuta si numero no es ni mayor ni menor a 0
    }
  }

  return 0;
}
