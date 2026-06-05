#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pelicula
{
  char nombre[100];
  int anio;
  struct Pelicula *siguiente;
};

void mosrtarMenu();
void insertarAlInicio(struct Pelicula **cabeza, const char *nombre, int anio);
void insertarAlFinal(struct Pelicula **cabeza, const char *nombre, int anio);
void mostrarLista(struct Pelicula *nodo);
void eliminarNodo(struct Pelicula **cabeza, const char *nombre);
void buscarNodo(struct Pelicula **cabeza, const char *nombre);
void modificarNodo(struct Pelicula **cabeza, const char *nombre, const char *nuevoNombre, int nuevoAnio);

int main()
{
  struct Pelicula *lista = NULL;
  int opcion;
  do
  {
    mosrtarMenu();
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);
    getchar(); // Limpiar el buffer de entrada

    switch (opcion)
    {
    case 1:
      printf("Ingrese el nombre de la película: ");
      char nombreNueva[100];
      fgets(nombreNueva, sizeof(nombreNueva), stdin);
      nombreNueva[strcspn(nombreNueva, "\n")] = '\0'; // Eliminar el salto de línea

      printf("Ingrese el año de la película: ");
      int anio;
      scanf("%d", &anio);
      getchar(); // Limpiar el buffer de entrada

      insertarAlInicio(&lista, nombreNueva, anio);
      break;

    case 2:
      printf("PELICULAS:\n");
      mostrarLista(lista);
      break;

    case 3:
      printf("Ingrese el nombre de la película a eliminar: ");
      char nombreEliminar[100];
      fgets(nombreEliminar, sizeof(nombreEliminar), stdin);
      nombreEliminar[strcspn(nombreEliminar, "\n")] = '\0'; // Eliminar el salto de línea
      eliminarNodo(&lista, nombreEliminar);
      break;

    case 4:
      printf("Ingrese el nombre de la película: ");
      char nombreNuevaFinal[100];
      fgets(nombreNuevaFinal, sizeof(nombreNuevaFinal), stdin);
      nombreNuevaFinal[strcspn(nombreNuevaFinal, "\n")] = '\0';
      printf("Ingrese el año de la película: ");
      int anioFinal;
      scanf("%d", &anioFinal);
      getchar();
      insertarAlFinal(&lista, nombreNuevaFinal, anioFinal);
      break;

    case 5:
      printf("Ingrese el nombre de la película a buscar: ");
      char nombreBuscar[100];
      fgets(nombreBuscar, sizeof(nombreBuscar), stdin);
      nombreBuscar[strcspn(nombreBuscar, "\n")] = '\0';
      buscarNodo(&lista, nombreBuscar);
      break;

    case 6:
      printf("Ingrese el nombre de la película a modificar: ");
      char nombreModificar[100];
      fgets(nombreModificar, sizeof(nombreModificar), stdin);
      nombreModificar[strcspn(nombreModificar, "\n")] = '\0';

      printf("Ingrese el nuevo nombre de la película: ");
      char nuevoNombre[100];
      fgets(nuevoNombre, sizeof(nuevoNombre), stdin);
      nuevoNombre[strcspn(nuevoNombre, "\n")] = '\0';

      printf("Ingrese el nuevo año de la película: ");
      int nuevoAnio;
      scanf("%d", &nuevoAnio);
      getchar();
      modificarNodo(&lista, nombreModificar, nuevoNombre, nuevoAnio);
      break;

    case 0:
      printf("Saliendo...\n");
      break;

    default:
      printf("Opción no válida. Intente nuevamente.\n");
    }
  } while (opcion != 0);

  return 0;
}

void insertarAlInicio(struct Pelicula **cabeza, const char *nombre, int anio)
{
  struct Pelicula *nuevoNodo = (struct Pelicula *)malloc(sizeof(struct Pelicula));
  strcpy(nuevoNodo->nombre, nombre);
  nuevoNodo->anio = anio;
  nuevoNodo->siguiente = *cabeza;
  *cabeza = nuevoNodo;
}

void insertarAlFinal(struct Pelicula **cabeza, const char *nombre, int anio)
{
  struct Pelicula *nuevoNodo = (struct Pelicula *)malloc(sizeof(struct Pelicula));
  strcpy(nuevoNodo->nombre, nombre);
  nuevoNodo->anio = anio;
  nuevoNodo->siguiente = NULL;

  if (*cabeza == NULL)
  {
    *cabeza = nuevoNodo;
    return;
  }

  struct Pelicula *temp = *cabeza;
  while (temp->siguiente != NULL)
  {
    temp = temp->siguiente;
  }
  temp->siguiente = nuevoNodo;
}

void mostrarLista(struct Pelicula *nodo)
{
  while (nodo != NULL)
  {
    printf("%s (%d) \n", nodo->nombre, nodo->anio);
    nodo = nodo->siguiente;
  }
  printf("\n");
}

void buscarNodo(struct Pelicula **cabeza, const char *nombre)
{
  struct Pelicula *temp = *cabeza;

  while (temp != NULL && strcmp(temp->nombre, nombre) != 0)
  {
    temp = temp->siguiente;
  }

  if (temp != NULL)
  {
    printf("Pelicula encontrada: %s (%d)\n", temp->nombre, temp->anio);
  }
  else
  {
    printf("Pelicula no encontrada: %s\n", nombre);
  }
}

void modificarNodo(struct Pelicula **cabeza, const char *nombre, const char *nuevoNombre, int nuevoAnio)
{
  struct Pelicula *temp = *cabeza;

  while (temp != NULL && strcmp(temp->nombre, nombre) != 0) // strcmp devuelve 0 si las cadenas son iguales
  {
    temp = temp->siguiente; // Avanzar al siguiente nodo
  }

  if (temp == NULL)
    return; // No se encontró la película

  strcpy(temp->nombre, nuevoNombre);
  temp->anio = nuevoAnio;

  printf("Pelicula modificada: %s (%d)\n", temp->nombre, temp->anio);
}

void eliminarNodo(struct Pelicula **cabeza, const char *nombre)
{
  struct Pelicula *temp = *cabeza;
  struct Pelicula *anterior = NULL;

  while (temp != NULL && strcmp(temp->nombre, nombre) != 0) // strcmp devuelve 0 si las cadenas son iguales
  {
    anterior = temp;        // Guardar el nodo anterior
    temp = temp->siguiente; // Avanzar al siguiente nodo
  }

  if (temp == NULL)
    return; // No se encontró la película

  if (anterior == NULL) // La película a eliminar es la cabeza de la lista
  {
    *cabeza = temp->siguiente;
  }
  else // La película a eliminar está en medio o al final de la lista
  {
    anterior->siguiente = temp->siguiente;
  }

  free(temp); // Liberar la memoria del nodo eliminado
}

void mosrtarMenu()
{
  printf("\n");
  printf(" -------------- MENU -------------\n");
  printf("| 1. Agregar película al Inicio   |\n");
  printf("| 2. Mostrar películas            |\n");
  printf("| 3. Eliminar película            |\n");
  printf("| 4. Agregar película al Final    |\n");
  printf("| 5. Buscar película              |\n");
  printf("| 6. Modificar película           |\n");
  printf("| 0. Salir                        |\n");
  printf(" ---------------------------------\n");
}