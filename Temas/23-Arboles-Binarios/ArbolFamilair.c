#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura del nodo del árbol
struct Persona {
    char nombre[50];
    struct Persona* hijoIzquierdo;
    struct Persona* hijoDerecho;
};

// Función para crear una nueva persona
struct Persona* crearPersona(const char* nombre) {
    struct Persona* nueva = (struct Persona*)malloc(sizeof(struct Persona));
    strcpy(nueva->nombre, nombre);
    nueva->hijoIzquierdo = NULL;
    nueva->hijoDerecho = NULL;
    return nueva;
}

// Función para agregar hijos a una persona
void agregarHijos(struct Persona* padre, struct Persona* hijo1, struct Persona* hijo2) {
    padre->hijoIzquierdo = hijo1;
    padre->hijoDerecho = hijo2;
}

// Función recursiva para imprimir el árbol (descendencia)
void imprimirArbol(struct Persona* raiz, int nivel) {
    if (raiz == NULL) return;

    // Imprimir espacios para mostrar jerarquía
    for (int i = 0; i < nivel; i++) {
        printf("    ");
    }

    // Mostrar el nombre de la persona
    printf("└─ %s\n", raiz->nombre);

    // Llamadas recursivas para los hijos
    imprimirArbol(raiz->hijoIzquierdo, nivel + 1);
    imprimirArbol(raiz->hijoDerecho, nivel + 1);
}

int main() {
    // Crear árbol de descendencia
    struct Persona* abuelo = crearPersona("Juan");

    struct Persona* hijo1 = crearPersona("Carlos");
    struct Persona* hijo2 = crearPersona("Ana");

    struct Persona* nieto1 = crearPersona("Lautaro");
    struct Persona* nieto2 = crearPersona("Micaela");
    struct Persona* nieto3 = crearPersona("Pedro");
    struct Persona* nieto4 = crearPersona("Sofia");

    // Armar relaciones
    agregarHijos(abuelo, hijo1, hijo2);
    agregarHijos(hijo1, nieto1, nieto2);
    agregarHijos(hijo2, nieto3, nieto4);

    // Imprimir árbol
    printf("Árbol de descendencia:\n");
    imprimirArbol(abuelo, 0);

    return 0;
}
