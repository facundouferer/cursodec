#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición del nodo de la pila
struct Nodo {
    char dato;
    struct Nodo* siguiente;
};

// Función para insertar un carácter en la pila (push)
void push(struct Nodo** tope, char valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *tope;
    *tope = nuevoNodo;
}

// Función para sacar un carácter de la pila (pop)
char pop(struct Nodo** tope) {
    if (*tope == NULL) {
        return '\0'; // Retorna null char si la pila está vacía
    }
    struct Nodo* temp = *tope;
    char valor = temp->dato;
    *tope = temp->siguiente;
    free(temp);
    return valor;
}

int main() {
    struct Nodo* pila = NULL;
    char palabra[100];

    // Pedir al usuario que ingrese una palabra
    printf("Ingrese una palabra: ");
    scanf("%99s", palabra);  // Limita la lectura a 99 caracteres para evitar overflow

    int longitud = strlen(palabra);

    // Insertar cada carácter de la palabra en la pila
    for (int i = 0; i < longitud; i++) {
        push(&pila, palabra[i]);
    }

    // Sacar los caracteres de la pila para imprimir la palabra invertida
    printf("Palabra invertida: ");
    for (int i = 0; i < longitud; i++) {
        char c = pop(&pila);
        printf("%c", c);
    }
    printf("\n");

    return 0;
}
