

#include <stdio.h>

/**
 * 1) La estructura de datos
 * sera dada por un struct en un array.
 */

struct Persona
{
  int dni;
  char nombre[30];
  char apellido[30];
};

int main()
{
  /**
   * 2) Inicializamos todo.
   */

  /* Array de ejemplo desordenado por DNI */
  struct Persona alumnos[] = {
      {40234567, "Ana", "Gomez"},
      {30123456, "Luis", "Perez"},
      {50345678, "Mariana", "Lopez"},
      {20111222, "Carlos", "Sanchez"},
      {45123400, "Sofia", "Diaz"},
      {35000000, "Jorge", "Martinez"},
      {27567890, "Lucia", "Garcia"},
      {48000000, "Diego", "Fernandez"},
      {32000000, "Valentina", "Rodriguez"}};

  int cantidad = sizeof(alumnos) / sizeof(alumnos[0]);

  /**
   * 3) deben ORDENAR información usando el algoritmo
   * de ordenamiento por el Método de la Burbuja.
   */

  int i, j;
  struct Persona aux;

  for (i = 0; i < cantidad - 1; i++)
  {
    for (j = 0; j < cantidad - i - 1; j++)
    {
      if (alumnos[j].dni > alumnos[j + 1].dni)
      {
        // Intercambiar
        aux = alumnos[j];
        alumnos[j] = alumnos[j + 1];
        alumnos[j + 1] = aux;
      }
    }
  }

  /**
   * 4) deben realizar una búsqueda usando el
   * método de búsqueda binaria.
   */

  int dniBUscado = 20111222; // DNI a buscar

  int inicio = 0;
  int fin = cantidad - 1;
  int encontrado = 0;

  while (inicio <= fin)
  {
    int medio = inicio + (fin - inicio) / 2;

    if (alumnos[medio].dni == dniBUscado)
    {
      printf("Alumno encontrado: %s %s, DNI: %d\n", alumnos[medio].nombre, alumnos[medio].apellido, alumnos[medio].dni);
      encontrado = 1;
      break;
    }
    else if (alumnos[medio].dni < dniBUscado)
    {
      inicio = medio + 1;
    }
    else
    {
      fin = medio - 1;
    }
  }

  if (!encontrado)
  {
    printf("Alumno con DNI %d no encontrado.\n", dniBUscado);
  }

  /**
   * 5) deben mostrar la información ordenada.
   * o permitir al usuario buscar algo.
   */
  printf("\nAlumnos ordenados por DNI:\n");
  for (i = 0; i < cantidad; i++)
  {
    printf("\t %d \t  %s \t  %s\n", alumnos[i].dni, alumnos[i].nombre, alumnos[i].apellido);
  }

  return 0;
}