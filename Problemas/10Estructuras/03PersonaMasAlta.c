#include <stdio.h>
#include <string.h>

#define CANT_PERSONAS 3
#define MAX_NOMBRE 50

struct Persona {
    char nombre[MAX_NOMBRE];
    float altura;
} ;

int main() {
    struct Persona personas[CANT_PERSONAS];
    float maxAltura = 0.0f;

    // Ingreso de datos
    for (int i = 0; i < CANT_PERSONAS; i++) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        fgets(personas[i].nombre, MAX_NOMBRE, stdin);
        // Eliminar salto de línea
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = 0;

        printf("Ingrese la altura de %s (en metros): ", personas[i].nombre);
        scanf("%f", &personas[i].altura);
        getchar(); // Limpiar el buffer

        if (personas[i].altura > maxAltura) {
            maxAltura = personas[i].altura;
        }
    }

    // Mostrar la(s) persona(s) más alta(s)
    printf("Persona(s) más alta(s) con %.2f metros:\n", maxAltura);
    for (int i = 0; i < CANT_PERSONAS; i++) {
        if (personas[i].altura == maxAltura) {
            printf("- %s\n", personas[i].nombre);
        }
    }

    return 0;
}