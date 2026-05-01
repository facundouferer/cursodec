#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

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

    // Insertamos nodos al final
    insertarAlFinal(&lista, 30); // Lista: 20 -> 10 -> 30
    insertarAlFinal(&lista, 40); // Lista: 20 -> 10 -> 30 -> 40
    insertarAlFinal(&lista, 50);
    insertarAlFinal(&lista, 60);

    printf("Lista actual:\n");
    mostrarLista(lista); // Muestra la lista completa

    return 0; // Fin del programa
}
