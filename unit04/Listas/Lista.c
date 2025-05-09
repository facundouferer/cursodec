#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void insertarAlInicio(struct Nodo** cabeza, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

void insertarAlFinal(struct Nodo** cabeza, int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
        return;
    }

    struct Nodo* temp = *cabeza;
    while (temp->siguiente != NULL) {
        temp = temp->siguiente;
    }
    temp->siguiente = nuevoNodo;
}

void eliminarNodo(struct Nodo** cabeza, int valor) {
    struct Nodo* temp = *cabeza;
    struct Nodo* anterior = NULL;

    while (temp != NULL && temp->dato != valor) {
        anterior = temp;
        temp = temp->siguiente;
    }

    if (temp == NULL) return;

    if (anterior == NULL) {
        *cabeza = temp->siguiente;
    } else {
        anterior->siguiente = temp->siguiente;
    }

    free(temp);
}

int buscar(struct Nodo* cabeza, int valor) {
    struct Nodo* temp = cabeza;
    while (temp != NULL) {
        if (temp->dato == valor) {
            return 1; // Encontrado
        }
        temp = temp->siguiente;
    }
    return 0; // No encontrado
}

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
    insertarAlFinal(&lista, 30);
    insertarAlFinal(&lista, 40);

    printf("Lista actual:\n");
    mostrarLista(lista);

    eliminarNodo(&lista, 20);
    printf("Luego de eliminar 20:\n");
    mostrarLista(lista);

    if (buscar(lista, 30)) {
        printf("El valor 30 está en la lista.\n");
    } else {
        printf("El valor 30 no está en la lista.\n");
    }

    return 0;
}
