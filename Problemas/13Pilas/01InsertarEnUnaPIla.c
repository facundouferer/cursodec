#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura de un nodo de la pila
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función push: insertar al tope de la pila
void push(struct Nodo** tope, int valor) {
    // Creamos un nuevo nodo
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;

    // El nuevo nodo apunta al que era el tope antes
    nuevoNodo->siguiente = *tope;

    // Ahora el nuevo nodo es el nuevo tope
    *tope = nuevoNodo;
}

// Función para mostrar la pila (de arriba hacia abajo)
void mostrarPila(struct Nodo* tope) {
    printf("Contenido de la pila:\n");
    while (tope != NULL) {
        printf("%d\n", tope->dato);
        tope = tope->siguiente;
    }
}

int main() {
    struct Nodo* pila = NULL; // Inicializamos la pila vacía
    int numero;

    // Pedimos al usuario que ingrese tres valores
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un número para apilar: ");
        scanf("%d", &numero);
        push(&pila, numero);
    }

    // Mostramos la pila resultante
    mostrarPila(pila);

    return 0;
}
