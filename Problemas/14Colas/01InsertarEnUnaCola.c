#include <stdio.h>
#include <stdlib.h>

// Definición del nodo de la cola
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para insertar un elemento en la cola (enqueue)
void enqueue(struct Nodo** frente, struct Nodo** final, int valor) {
    // Crear un nuevo nodo
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    // Si la cola está vacía, el nuevo nodo será el frente y el final
    if (*final == NULL) {
        *frente = nuevoNodo;
        *final = nuevoNodo;
    } else {
        // Si no está vacía, enlazamos el nuevo nodo al final y movemos el puntero final
        (*final)->siguiente = nuevoNodo;
        *final = nuevoNodo;
    }
}

// Función para mostrar la cola completa
void mostrarCola(struct Nodo* frente) {
    printf("Cola completa: ");
    struct Nodo* actual = frente;
    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

int main() {
    struct Nodo* frente = NULL;  // Apunta al primer elemento de la cola
    struct Nodo* final = NULL;   // Apunta al último elemento de la cola

    int numero;

    // Insertar 3 números ingresados por el usuario
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un número para insertar en la cola: ");
        scanf("%d", &numero);
        enqueue(&frente, &final, numero);
    }

    // Mostrar la cola completa
    mostrarCola(frente);

    // Liberar memoria (opcional, para buenas prácticas)
    struct Nodo* temp;
    while (frente != NULL) {
        temp = frente;
        frente = frente->siguiente;
        free(temp);
    }

    return 0;
}
