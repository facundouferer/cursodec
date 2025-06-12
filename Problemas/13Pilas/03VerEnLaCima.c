#include <stdio.h>
#include <stdlib.h>

// Definición del nodo de la pila
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para insertar un elemento en la pila (push)
void push(struct Nodo** tope, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *tope;
    *tope = nuevoNodo;
}

// Función para ver el valor en la cima de la pila sin eliminarlo (peek)
void peek(struct Nodo* tope) {
    if (tope == NULL) {
        printf("La pila está vacía, no hay cima.\n");
    } else {
        printf("El valor en la cima de la pila es: %d\n", tope->dato);
    }
}

// Función para mostrar el contenido de la pila
void mostrarPila(struct Nodo* tope) {
    if (tope == NULL) {
        printf("La pila está vacía.\n");
        return;
    }
    printf("Contenido de la pila:\n");
    while (tope != NULL) {
        printf("%d\n", tope->dato);
        tope = tope->siguiente;
    }
}

int main() {
    struct Nodo* pila = NULL;
    int numero;

    // Insertamos tres números en la pila
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un número para apilar: ");
        scanf("%d", &numero);
        push(&pila, numero);
    }

    // Mostrar la pila completa
    mostrarPila(pila);

    // Mostrar la cima sin eliminarla
    peek(pila);

    return 0;
}
