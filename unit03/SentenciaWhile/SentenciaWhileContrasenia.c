#include <stdio.h>

int main()
{
  int clave;

  printf("Ingrese la clave numérica (1234): ");
  scanf("%d", &clave);

  while (clave != 1234)
  { // Mientras la clave no sea 1234
    printf("Clave incorrecta. Intente nuevamente: ");
    scanf("%d", &clave);
  }

  printf("¡Acceso concedido!\n");

  return 0;
}
