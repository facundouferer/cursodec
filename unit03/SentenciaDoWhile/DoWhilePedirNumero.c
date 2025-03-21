#include <stdio.h>

int main()
{
  int numero;

  do
  {
    printf("Ingrese un número mayor que 10: ");
    scanf("%d", &numero);
  } while (numero <= 10); // Si el número es 10 o menor, vuelve a pedirlo

  printf("Número aceptado: %d\n", numero);

  return 0;
}
