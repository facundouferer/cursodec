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

    printf("Lista actual:\n");
    mostrarLista(lista); // Muestra la lista completa

    return 0; // Fin del programa
}
