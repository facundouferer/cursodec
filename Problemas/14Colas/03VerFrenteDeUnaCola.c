#include <stdio.h>
#include <stdlib.h>

// Definición del nodo de la cola
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para insertar un elemento en la cola (enqueue)
void enqueue(struct Nodo** frente, struct Nodo** final, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (*final == NULL) {
        *frente = nuevoNodo;
        *final = nuevoNodo;
    } else {
        (*final)->siguiente = nuevoNodo;
        *final = nuevoNodo;
    }
}

// Función para mostrar el elemento que está en el frente de la cola, sin eliminarlo
void verFrente(struct Nodo* frente) {
    if (frente == NULL) {
        printf("La cola está vacía, no hay elemento en el frente.\n");
    } else {
        printf("El elemento en el frente de la cola es: %d\n", frente->dato);
    }
}

// Función para mostrar toda la cola
void mostrarCola(struct Nodo* frente) {
    if (frente == NULL) {
        printf("La cola está vacía.\n");
        return;
    }
    printf("Elementos actuales en la cola: ");
    struct Nodo* actual = frente;
    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;
    int numero;

    // Insertar 3 números en la cola
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un número para insertar en la cola: ");
        scanf("%d", &numero);
        enqueue(&frente, &final, numero);
    }

    // Mostrar la cola completa
    mostrarCola(frente);

    // Mostrar el frente de la cola sin eliminar
    verFrente(frente);

    // Liberar memoria antes de terminar
    struct Nodo* temp;
    while (frente != NULL) {
        temp = frente;
        frente = frente->siguiente;
        free(temp);
    }

    return 0;
}
