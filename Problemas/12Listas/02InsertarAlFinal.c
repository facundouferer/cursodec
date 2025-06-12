#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura del nodo
struct Nodo {
    int dato;               // Número que se guarda en el nodo
    struct Nodo* siguiente; // Puntero al siguiente nodo
};

// Función para insertar un nuevo nodo al final de la lista
void insertarAlFinal(struct Nodo** cabeza, int valor) {
    // Creamos un nuevo nodo y asignamos el valor
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL; // Este nuevo nodo será el último, así que apunta a NULL

    // Si la lista está vacía, el nuevo nodo será la cabeza
    if (*cabeza == NULL) {
        *cabeza = nuevo;
    } else {
        // Si la lista ya tiene elementos, recorremos hasta el último nodo
        struct Nodo* actual = *cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente; // Avanzamos hasta llegar al final
        }
        actual->siguiente = nuevo; // El último nodo apunta al nuevo
    }
}

// Función para mostrar los elementos de la lista
void mostrarLista(struct Nodo* cabeza) {
    printf("Elementos de la lista:\n");
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* lista = NULL; // Lista inicialmente vacía
    int numero;

    // Pedimos al usuario 3 números
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        insertarAlFinal(&lista, numero); // Insertamos cada número al final
    }

    // Mostramos la lista final
    mostrarLista(lista);

    return 0;
}
