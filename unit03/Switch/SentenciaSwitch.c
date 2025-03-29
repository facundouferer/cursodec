#include <stdio.h>

int main()
{
  int opcion;
  printf("Seleccione una opción (1-3): ");
  scanf("%d", &opcion);

  switch (opcion)
  {
  case 1:
    printf("Opción 1 seleccionada.\n");
    break;
  case 2:
    printf("Opción 2 seleccionada.\n");
    break;
  case 3:
    printf("Opción 3 seleccionada.\n");
    break;
  default:
    printf("Opción inválida.\n");
  }
  return 0;
}