#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para agregar un nodo al inicio
void insertarAlInicio(struct Nodo** cabeza, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

// Función para mostrar la lista
void mostrarLista(struct Nodo* nodo) {
    while (nodo != NULL) {
        printf("%d -> ", nodo->dato);
        nodo = nodo->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* lista = NULL;

    insertarAlInicio(&lista, 10);
    insertarAlInicio(&lista, 20);
    insertarAlInicio(&lista, 30);

    printf("Lista enlazada: ");
    mostrarLista(lista);

    return 0;
}

