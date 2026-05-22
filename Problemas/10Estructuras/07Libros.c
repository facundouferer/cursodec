#include <stdio.h>

#define CANT_LIBROS 1000
#define MAX_TEXTO 100
#define CANT_AUTORES 1000

struct Autor
{
  char nombre[MAX_TEXTO];
  char nacionalidad[MAX_TEXTO];
  int cantLibrosPublicados;
};

struct Libro
{
  char titulo[MAX_TEXTO];
  char editorial[MAX_TEXTO];
  char genero[MAX_TEXTO];
  int isbn;
  int anioPublicacion;
  struct Autor autor;
};

void listarLibros(struct Libro libros[], int cantidad)
{
  printf("--------------------\n");

  printf("LISTADO DE LIBROS:\n");
  for (int i = 0; i < cantidad; i++)
  {
    printf("LISTADO DE LIBROS:\n");
    printf("Título: %s", libros[i].titulo);
    printf("Editorial: %s", libros[i].editorial);
    printf("Género: %s", libros[i].genero);
    printf("ISBN: %d\n", libros[i].isbn);
    printf("Año de publicación: %d\n", libros[i].anioPublicacion);
    printf("Autor: %s\n", libros[i].autor.nombre);
    printf("Nacionalidad: %s\n", libros[i].autor.nacionalidad);
    printf("Libros publicados: %d\n", libros[i].autor.cantLibrosPublicados);
    printf("--------------------\n");
  }
}

void cargarLibro(struct Libro libros[], struct Autor autores[], int i)
{
  printf("Ingrese el título del libro %d: ", i + 1);
  fgets(libros[i].titulo, MAX_TEXTO, stdin);

  printf("Ingrese la editorial del libro %d: ", i + 1);
  fgets(libros[i].editorial, MAX_TEXTO, stdin);

  printf("Ingrese el género del libro %d: ", i + 1);
  fgets(libros[i].genero, MAX_TEXTO, stdin);

  printf(" ISBN %d: ", i + 1);
  scanf("%d", &libros[i].isbn);

  printf("Ingrese el año de publicación del libro %d: ", i + 1);
  scanf(" %d", &libros[i].anioPublicacion);
  getchar(); // Limpiar el buffer de entrada

  // Asignar un autor al libro (en este caso, se asigna el primer autor)
  printf("Ingrese el ID del autor para el libro %d: ", i + 1);
  int idAutor;
  scanf(" %d", &idAutor);
  libros[i].autor = autores[idAutor - 1];
  printf("--------------------\n");
}

void cargarAutor(struct Autor autores[], int i)
{
  printf("Ingrese el nombre del autor %d: ", i + 1);
  fgets(autores[i].nombre, MAX_TEXTO, stdin);

  printf("Ingrese la nacionalidad del autor %d: ", i + 1);
  fgets(autores[i].nacionalidad, MAX_TEXTO, stdin);

  printf("Ingrese la cantidad de libros publicados por el autor %d: ", i + 1);
  scanf(" %d", &autores[i].cantLibrosPublicados);
  getchar(); // Limpiar el buffer de entrada
  printf("--------------------\n");
}

void listarAutores(struct Autor autores[], int cantidad)
{
  printf("LISTADO DE AUTORES:\n");
  for (int i = 0; i < cantidad; i++)
  {
    printf("%d)", i);
    printf("Nombre: %s", autores[i].nombre);
    printf("Nacionalidad: %s", autores[i].nacionalidad);
    printf("Libros publicados: %d\n", autores[i].cantLibrosPublicados);
  }
}

/**
 * CRUD (Create, Read, Update, Delete) para autores
 */

struct Autor buscarAutor(struct Autor autores[], int cantidad, int id)
{
  struct Autor autorEncontrado = autores[id];
  return autorEncontrado;
}

void mostrarAutor(struct Autor autor)
{
  printf("Nombre: %s", autor.nombre);
  printf("Nacionalidad: %s", autor.nacionalidad);
  printf("Libros publicados: %d\n", autor.cantLibrosPublicados);
}

int main()
{
  struct Autor autores[CANT_AUTORES];
  struct Libro libros[CANT_LIBROS];
  int cantAutoresCargados = 0;
  int cantLibrosCargados = 0;
  int opcion = 0;

  do
  {
    printf("\n=== MENÚ DE LIBROS ===\n");
    printf("1. Cargar autores\n");
    printf("2. Cargar libros\n");
    printf("3. Listar libros\n");
    printf("4. Listar Autores\n");
    printf("5. Buscar autor por ID\n");
    printf("9. Salir\n");
    printf("Seleccione una opción: ");
    scanf(" %d", &opcion);
    getchar(); // Limpiar el buffer de entrada

    switch (opcion)
    {
    case 1:
      cargarAutor(autores, cantAutoresCargados);
      cantAutoresCargados++;
      break;
    case 2:
      cargarLibro(libros, autores, cantLibrosCargados);
      cantLibrosCargados++;
      break;
    case 3:
      listarLibros(libros, cantLibrosCargados);
      break;
    case 4:
      listarAutores(autores, cantAutoresCargados);
      break;
    case 5:
      printf("Ingrese el ID del autor a buscar: ");
      int idAutor;
      scanf(" %d", &idAutor);
      struct Autor autor = buscarAutor(autores, cantAutoresCargados, idAutor);
      mostrarAutor(autor);
    case 9:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opción inválida, intente nuevamente.\n");
      break;
    }
  } while (opcion != 9);

  return 0;
}