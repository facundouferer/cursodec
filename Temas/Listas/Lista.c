#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

void insertarAlInicio(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); // Reservamos memoria
    nuevoNodo->dato = valor; // Asignamos el valor al nodo
    nuevoNodo->siguiente = *cabeza; // El nuevo nodo apunta al nodo actual de la cabeza
    *cabeza = nuevoNodo; // La cabeza de la lista ahora es el nuevo nodo
}
void insertarAlFinal(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); // Creamos el nuevo nodo
    nuevoNodo->dato = valor;                                             // Asignamos el valor
    nuevoNodo->siguiente = NULL;                                         // Como será el último, su siguiente es NULL
    if (*cabeza == NULL)
    {
        // Si la lista está vacía, el nuevo nodo es la cabeza
        *cabeza = nuevoNodo;
        return;
    }

    // Si la lista no está vacía, buscamos el último nodo
    struct Nodo *temp = *cabeza;
    while (temp->siguiente != NULL)
    {
        temp = temp->siguiente; // Avanzamos al siguiente nodo
    }
    temp->siguiente = nuevoNodo; // Enlazamos el último nodo con el nuevo
}
// Función para eliminar el primer nodo que tenga un valor específico
void eliminarNodo(struct Nodo **cabeza, int valor)
{
    struct Nodo *temp = *cabeza;
    struct Nodo *anterior = NULL;
    while (temp != NULL && temp->dato != valor) // Buscamos el nodo con el valor indicado
    {
        anterior = temp;
        temp = temp->siguiente;
    }
    if (temp == NULL)
        return; // Si no lo encontramos, salimos

    if (anterior == NULL)
    {
        // El nodo a eliminar es el primero
        *cabeza = temp->siguiente;
    }
    else
    {
        // Saltamos el nodo a eliminar
        anterior->siguiente = temp->siguiente;
    }

    free(temp); // Liberamos la memoria del nodo eliminado
}

int buscar(struct Nodo *cabeza, int valor)
{
    struct Nodo *temp = cabeza;
    while (temp != NULL)
    {
        if (temp->dato == valor)
        {
            return 1; // Encontrado
        }
        temp = temp->siguiente;
    }
    return 0; // No encontrado
}
void mostrarLista(struct Nodo *nodo)
{
    while (nodo != NULL)
    {
        printf("%d -> ", nodo->dato); // Mostramos el valor del nodo
        nodo = nodo->siguiente;       // Avanzamos al siguiente nodo
    }
    printf("NULL\n"); // Indicamos el final de la lista
}

// Función principal del programa
int main()
{
    struct Nodo *lista = NULL; // Creamos una lista vacía

    // Insertamos nodos al inicio
    insertarAlInicio(&lista, 10); // Lista: 10
    insertarAlInicio(&lista, 20); // Lista: 20 -> 10

    // Insertamos nodos al final
    insertarAlFinal(&lista, 30); // Lista: 20 -> 10 -> 30
    insertarAlFinal(&lista, 40); // Lista: 20 -> 10 -> 30 -> 40

    printf("Lista actual:\n");
    mostrarLista(lista); // Muestra la lista completa

    eliminarNodo(&lista, 20); // Eliminamos el nodo con valor 20
    printf("Luego de eliminar 20:\n");
    mostrarLista(lista); // Mostramos lista sin el 20

    // Buscamos si existe el valor 30
    if (buscar(lista, 30))
    {
        printf("El valor 30 está en la lista.\n");
    }
    else
    {
        printf("El valor 30 no está en la lista.\n");
    }

    return 0; // Fin del programa
}
