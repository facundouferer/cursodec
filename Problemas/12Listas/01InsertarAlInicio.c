#include <stdio.h>
#include <stdlib.h>

// Definición del nodo de la lista
struct Nodo {
    int dato;               // Dato que se guarda
    struct Nodo* siguiente; // Puntero al siguiente nodo
};

// Función para insertar un nodo al inicio de la lista
void insertarAlInicio(struct Nodo** cabeza, int valor) {
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo)); // Creamos un nuevo nodo
    nuevo->dato = valor; //asignamos el valor al nuevo nodo
    nuevo->siguiente = *cabeza; // El nuevo apunta al anterior primer nodo
    *cabeza = nuevo;// Ahora el nuevo nodo es la cabeza de la lista
}

// Función para mostrar los elementos de la lista
void mostrarLista(struct Nodo* cabeza) { // Recibe la cabeza de la lista
    printf("Elementos de la lista:\n"); // Mensaje inicial
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato); // Mostramos el dato del nodo actual
        cabeza = cabeza->siguiente; // Avanzamos al siguiente nodo
    }
    printf("NULL\n"); // Indicamos el final de la lista
}

int main() {
    struct Nodo* lista = NULL; // Inicialmente, el nodo cabeza es NULL (lista vacía)
    int numero;

    char seguir = 's'; //variable de control para seguir ingresando números
    while(seguir == 's' || seguir == 'S') {
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        insertarAlInicio(&lista, numero); // Insertamos el número al inicio
        printf("¿Desea ingresar otro número? (s/n): ");
        scanf(" %c", &seguir); // Espacio antes de %c para ignorar espacios en blanco
    }

    // Mostramos la lista resultante
    mostrarLista(lista);

    return 0;
}
