
#include <stdio.h>

struct Persona
{
  int dni;
  char nombre[30];
  char apellido[30];
};

int main()
{
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

  printf("\nAlumnos ordenados por DNI:\n");
  for (i = 0; i < cantidad; i++)
  {
    printf("\t %d \t  %s \t  %s\n", alumnos[i].dni, alumnos[i].nombre, alumnos[i].apellido);
  }

  return 0;
}

void ordenarAlumnosNombreyApellido(struct Persona alumnos[], int cantidad)
{
  int i, j;
  struct Persona aux;

  for (i = 0; i < cantidad - 1; i++)
  {
    for (j = 0; j < cantidad - i - 1; j++)
    {
      if (alumnos[j].apellido[0] > alumnos[j + 1].apellido[0] ||
          (alumnos[j].apellido[0] == alumnos[j + 1].apellido[0] && alumnos[j].nombre[0] > alumnos[j + 1].nombre[0]))
      {
        // Intercambiar
        aux = alumnos[j];
        alumnos[j] = alumnos[j + 1];
        alumnos[j + 1] = aux;
      }
    }
  }
}