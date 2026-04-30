#include <stdio.h>
#include <stdlib.h>

// Estructura de cada nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Encolar (agregar al final)
void encolar(struct Nodo** frente, struct Nodo** fin, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (*fin == NULL) {
        *frente = *fin = nuevo;
    } else {
        (*fin)->siguiente = nuevo;
        *fin = nuevo;
    }

    printf("Se encoló: %d\n", valor);
}

// Desencolar (sacar del frente)
int desencolar(struct Nodo** frente, struct Nodo** fin) {
    if (*frente == NULL) {
        printf("La cola está vacía.\n");
        return -1;
    }

    struct Nodo* temp = *frente;
    int valor = temp->dato;
    *frente = (*frente)->siguiente;

    if (*frente == NULL) {
        *fin = NULL;
    }

    free(temp);
    return valor;
}

// Mostrar la cola
void mostrar(struct Nodo* frente) {
    printf("Contenido de la cola:\n");
    while (frente != NULL) {
        printf("%d -> ", frente->dato);
        frente = frente->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* fin = NULL;

    // Encolamos valores
    encolar(&frente, &fin, 10);
    encolar(&frente, &fin, 20);
    encolar(&frente, &fin, 30);

    mostrar(frente);

    // Desencolamos uno
    int valor = desencolar(&frente, &fin);
    printf("Se desencoló: %d\n", valor);

    mostrar(frente);

    return 0;
}

