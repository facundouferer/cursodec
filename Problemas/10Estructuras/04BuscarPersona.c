#include <stdio.h>
#include <string.h>

#define CANT_PERSONAS 5
#define TAM_NOMBRE 50

struct Persona{
    char nombre[TAM_NOMBRE];
    int dni;
} ;

int main() {
    struct Persona personas[CANT_PERSONAS];
    char nombreBuscado[TAM_NOMBRE];
    int encontrado = 0;

    // Cargar datos de las personas
    printf("Ingrese los datos de %d personas:\n", CANT_PERSONAS);
    for (int i = 0; i < CANT_PERSONAS; i++) {
        printf("Persona %d\n", i + 1);
        printf("Nombre: ");
        fgets(personas[i].nombre, TAM_NOMBRE, stdin);
        // Eliminar salto de línea
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = 0;
        printf("DNI: ");
        scanf("%d", &personas[i].dni);
        getchar(); // Limpiar el buffer
    }

    // Buscar persona por nombre
    printf("\nIngrese el nombre a buscar: ");
    fgets(nombreBuscado, TAM_NOMBRE, stdin);
    nombreBuscado[strcspn(nombreBuscado, "\n")] = 0;

    for (int i = 0; i < CANT_PERSONAS; i++) {
        if (strcmp(personas[i].nombre, nombreBuscado) == 0) {
            printf("DNI de %s: %d\n", personas[i].nombre, personas[i].dni);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("La persona con nombre '%s' no existe en el arreglo.\n", nombreBuscado);
    }

    return 0;
}