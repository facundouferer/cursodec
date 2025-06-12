#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura de un nodo
struct Nodo {
    int dato;               // Almacena el número
    struct Nodo* siguiente; // Apunta al siguiente nodo
};

// Función para insertar al final de la lista (para armar una lista de ejemplo)
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

// Función para buscar un número en la lista
void buscar(struct Nodo* cabeza, int valorBuscado) {
    struct Nodo* actual = cabeza;
    int encontrado = 0;

    // Recorremos la lista nodo por nodo
    while (actual != NULL) {
        if (actual->dato == valorBuscado) {
            encontrado = 1; // Lo encontramos
            break;          // Ya no hace falta seguir buscando
        }
        actual = actual->siguiente; // Avanzamos al siguiente nodo
    }

    // Mostramos el resultado
    if (encontrado) {
        printf("Número encontrado.\n");
    } else {
        printf("No encontrado.\n");
    }
}

// Función para mostrar la lista
void mostrarLista(struct Nodo* cabeza) {
    printf("Contenido de la lista:\n");
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* lista = NULL;
    int valor;

    // Insertamos algunos valores en la lista
    insertarAlFinal(&lista, 10);
    insertarAlFinal(&lista, 20);
    insertarAlFinal(&lista, 30);

    // Mostramos la lista completa
    mostrarLista(lista);

    // Pedimos al usuario un valor a buscar
    printf("Ingrese un número a buscar: ");
    scanf("%d", &valor);

    // Llamamos a la función de búsqueda
    buscar(lista, valor);

    return 0;
}
