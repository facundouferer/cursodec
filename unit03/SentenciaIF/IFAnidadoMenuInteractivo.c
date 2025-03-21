#include <stdio.h>

int main()
{
  int opcion;

  printf("Menú de opciones:\n");
  printf("1. Operaciones matemáticas\n");
  printf("2. Juegos\n");
  printf("Seleccione una opción: ");
  scanf("%d", &opcion);

  if (opcion == 1)
  { // Primer nivel de decisión
    int subopcion;
    printf("\nSeleccione la operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("Seleccione una subopción: ");
    scanf("%d", &subopcion);

    if (subopcion == 1)
    {
      printf("Seleccionaste Suma.\n");
    }
    else if (subopcion == 2)
    {
      printf("Seleccionaste Resta.\n");
    }
    else
    {
      printf("Subopción no válida.\n");
    }
  }
  else if (opcion == 2)
  { // Otra opción del primer nivel
    printf("Accediendo a juegos...\n");
  }
  else
  {
    printf("Opción no válida.\n");
  }

  return 0;
}
