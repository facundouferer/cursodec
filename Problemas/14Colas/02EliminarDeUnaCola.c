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

// Función para eliminar el primer elemento de la cola (dequeue)
void dequeue(struct Nodo** frente, struct Nodo** final) {
    if (*frente == NULL) {
        printf("La cola está vacía, no hay elementos para eliminar.\n");
        return;
    }

    // Guardamos el nodo que vamos a eliminar
    struct Nodo* temp = *frente;
    // Movemos el frente al siguiente nodo
    *frente = (*frente)->siguiente;

    // Si la cola queda vacía, también actualizamos el final a NULL
    if (*frente == NULL) {
        *final = NULL;
    }

    printf("Se eliminó el elemento: %d\n", temp->dato);
    free(temp);
}

// Función para mostrar la cola completa
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

    // Mostrar la cola antes de eliminar
    mostrarCola(frente);

    // Eliminar el primer elemento (dequeue)
    dequeue(&frente, &final);

    // Mostrar la cola después de eliminar
    mostrarCola(frente);

    // Liberar memoria restante
    struct Nodo* temp;
    while (frente != NULL) {
        temp = frente;
        frente = frente->siguiente;
        free(temp);
    }

    return 0;
}
