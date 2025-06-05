#include <stdio.h>
#include <stdlib.h>

// Nodo de la pila
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Agregar (push)
void push(struct Nodo** tope, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = *tope;
    *tope = nuevo;
    printf("Se apiló: %d\n", valor);
}

// Sacar (pop)
int pop(struct Nodo** tope) {
    if (*tope == NULL) {
        printf("La pila está vacía.\n");
        return -1;
    }
    struct Nodo* temp = *tope;
    int valor = temp->dato;
    *tope = temp->siguiente;
    free(temp);
    return valor;
}

// Mostrar pila
void mostrar(struct Nodo* tope) {
    printf("Contenido de la pila:\n");
    while (tope != NULL) {
        printf("%d\n", tope->dato);
        tope = tope->siguiente;
    }
}

int main() {
    struct Nodo* pila = NULL;

    // Apilamos valores
    push(&pila, 10);
    push(&pila, 20);
    push(&pila, 30);

    mostrar(pila);

    // Desapilamos uno
    int desapilado = pop(&pila);
    printf("Se desapiló: %d\n", desapilado);

    mostrar(pila);

    return 0;
}

