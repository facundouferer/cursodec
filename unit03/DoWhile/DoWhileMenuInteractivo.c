#include <stdio.h>

int main()
{
  int opcion;

  do
  {
    printf("\n--- Menú ---\n");
    printf("1. Saludar\n");
    printf("2. Despedirse\n");
    printf("3. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      printf("¡Hola!\n");
      break;
    case 2:
      printf("¡Adiós!\n");
      break;
    case 3:
      printf("Saliendo del programa...\n");
      break;
    default:
      printf("Opción no válida. Intente nuevamente.\n");
    }
  } while (opcion != 3); // Repite mientras la opción no sea 3

  return 0;
}