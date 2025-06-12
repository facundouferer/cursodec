#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura de un nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para insertar al final de la lista
void insertarAlFinal(struct Nodo** cabeza, int valor) {
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevo;
    } else {
        struct Nodo* actual = *cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

// Función para mostrar la lista completa
void mostrarLista(struct Nodo* cabeza) {
    printf("Contenido de la lista:\n");
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

// Función para eliminar un nodo con un valor específico
void eliminarValor(struct Nodo** cabeza, int valor) {
    struct Nodo* actual = *cabeza;
    struct Nodo* anterior = NULL;

    while (actual != NULL) {
        if (actual->dato == valor) {
            if (anterior == NULL) {
                // El nodo a eliminar es el primero
                *cabeza = actual->siguiente;
            } else {
                // Saltamos el nodo actual (el que vamos a eliminar)
                anterior->siguiente = actual->siguiente;
            }

            // Liberamos el nodo eliminado
            free(actual);
            printf("Valor %d eliminado de la lista.\n", valor);
            return; // Salimos después de eliminar
        }

        // Avanzamos al siguiente nodo
        anterior = actual;
        actual = actual->siguiente;
    }

    // Si llegamos aquí, no se encontró el valor
    printf("Valor %d no encontrado en la lista.\n", valor);
}

int main() {
    struct Nodo* lista = NULL;

    // Insertamos algunos valores
    insertarAlFinal(&lista, 10);
    insertarAlFinal(&lista, 15);
    insertarAlFinal(&lista, 20);
    insertarAlFinal(&lista, 25);

    // Mostramos lista original
    mostrarLista(lista);

    // Eliminamos el valor 15
    eliminarValor(&lista, 15);

    // Mostramos la lista después de eliminar
    mostrarLista(lista);

    return 0;
}
