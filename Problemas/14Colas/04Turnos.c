#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 50

// Nodo de la cola que guarda el nombre de la persona
struct Nodo {
    char nombre[MAX_NOMBRE];
    struct Nodo* siguiente;
};

// Función para encolar una persona al final de la cola
void enqueue(struct Nodo** frente, struct Nodo** final, char nombre[]) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    strcpy(nuevoNodo->nombre, nombre);
    nuevoNodo->siguiente = NULL;

    if (*final == NULL) {
        *frente = nuevoNodo;
        *final = nuevoNodo;
    } else {
        (*final)->siguiente = nuevoNodo;
        *final = nuevoNodo;
    }
}

// Función para desencolar (atender) la persona que está al frente
void dequeue(struct Nodo** frente, struct Nodo** final) {
    if (*frente == NULL) {
        printf("No hay personas en la cola para atender.\n");
        return;
    }

    struct Nodo* temp = *frente;
    printf("Atendiendo a: %s\n", temp->nombre);
    *frente = (*frente)->siguiente;

    if (*frente == NULL) { // Si la cola queda vacía
        *final = NULL;
    }

    free(temp);
}

// Función para mostrar la cola actual
void mostrarCola(struct Nodo* frente) {
    if (frente == NULL) {
        printf("La cola está vacía.\n");
        return;
    }

    printf("Cola actual: ");
    struct Nodo* actual = frente;
    while (actual != NULL) {
        printf("%s ", actual->nombre);
        actual = actual->siguiente;
    }
    printf("\n");
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;
    char opcion;
    char nombre[MAX_NOMBRE];

    do {
        printf("\n--- Sistema de Turnos ---\n");
        printf("a) Encolar persona\n");
        printf("b) Atender persona (desencolar)\n");
        printf("c) Mostrar cola actual\n");
        printf("d) Salir\n");
        printf("Elija una opción: ");
        scanf(" %c", &opcion);

        switch(opcion) {
            case 'a':
                printf("Ingrese el nombre de la persona a encolar: ");
                scanf(" %49[^\n]", nombre); // Lee línea incluyendo espacios hasta 49 chars
                enqueue(&frente, &final, nombre);
                mostrarCola(frente);
                break;

            case 'b':
                dequeue(&frente, &final);
                mostrarCola(frente);
                break;

            case 'c':
                mostrarCola(frente);
                break;

            case 'd':
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 'd');

    // Liberar memoria antes de terminar
    struct Nodo* temp;
    while (frente != NULL) {
        temp = frente;
        frente = frente->siguiente;
        free(temp);
    }

    return 0;
}
