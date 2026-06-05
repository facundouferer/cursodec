#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona
{
  char nombre[50];
  char apellido[50];
  int dni;
  struct Persona *siguiente;
};

void insertarAlInicio(struct Persona **cabeza, const char *nombre, const char *apellido, int dni)
{
  struct Persona *nuevoNodo = (struct Persona *)malloc(sizeof(struct Persona));
  strcpy(nuevoNodo->nombre, nombre);
  strcpy(nuevoNodo->apellido, apellido);
  nuevoNodo->dni = dni;
  nuevoNodo->siguiente = *cabeza;
  *cabeza = nuevoNodo;
}

void insertarAlFinal(struct Persona **cabeza, const char *nombre, const char *apellido, int dni)
{
  struct Persona *nuevoNodo = (struct Persona *)malloc(sizeof(struct Persona));
  strcpy(nuevoNodo->nombre, nombre);
  strcpy(nuevoNodo->apellido, apellido);
  nuevoNodo->dni = dni;
  nuevoNodo->siguiente = NULL;

  if (*cabeza == NULL)
  {
    *cabeza = nuevoNodo;
    return;
  }

  struct Persona *temp = *cabeza;
  while (temp->siguiente != NULL)
  {
    temp = temp->siguiente;
  }
  temp->siguiente = nuevoNodo;
}

void eliminarPersona(struct Persona **cabeza, int dni)
{
  struct Persona *temp = *cabeza;
  struct Persona *anterior = NULL;

  while (temp != NULL && temp->dni != dni)
  {
    anterior = temp;
    temp = temp->siguiente;
  }

  if (temp == NULL)
    return;

  if (anterior == NULL)
  {
    *cabeza = temp->siguiente;
  }
  else
  {
    anterior->siguiente = temp->siguiente;
  }

  free(temp);
}

int buscar(struct Persona *cabeza, int dni)
{
  struct Persona *temp = cabeza;
  while (temp != NULL)
  {
    if (temp->dni == dni)
    {
      return 1;
    }
    temp = temp->siguiente;
  }
  return 0;
}

void mostrarLista(struct Persona *nodo)
{
  while (nodo != NULL)
  {
    printf("%s %s (DNI: %d) -> ", nodo->nombre, nodo->apellido, nodo->dni);
    nodo = nodo->siguiente;
  }
  printf("NULL\n");
}

int main()
{
  struct Persona *lista = NULL;

  insertarAlInicio(&lista, "Juan", "Perez", 12345678);
  insertarAlInicio(&lista, "Maria", "Gomez", 87654321);

  insertarAlFinal(&lista, "Carlos", "Lopez", 11223344);
  insertarAlFinal(&lista, "Ana", "Martinez", 55667788);

  printf("Lista actual:\n");
  mostrarLista(lista);

  eliminarPersona(&lista, 87654321);
  printf("Luego de eliminar DNI 87654321:\n");
  mostrarLista(lista);

  if (buscar(lista, 11223344))
  {
    printf("La persona con DNI 11223344 está en la lista.\n");
  }
  else
  {
    printf("La persona con DNI 11223344 no está en la lista.\n");
  }

  return 0;
}
