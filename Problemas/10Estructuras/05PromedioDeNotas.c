#include <stdio.h>
#include <string.h>

#define CANT_ALUMNOS 5
#define MAX_NOMBRE 50

struct Alumno{
    char nombre[MAX_NOMBRE];
    float nota1;
    float nota2;
    float nota3;
} ;

int main() {
    struct Alumno alumnos[CANT_ALUMNOS];
    float promedios[CANT_ALUMNOS];
    int i, idx_mejor = 0;

    // Carga de datos
    for (i = 0; i < CANT_ALUMNOS; i++) {
        printf("Ingrese nombre del alumno %d: ", i + 1);
        fgets(alumnos[i].nombre, MAX_NOMBRE, stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre, "\n")] = 0; // Eliminar salto de línea

        printf("Ingrese nota 1: ");
        scanf("%f", &alumnos[i].nota1);
        printf("Ingrese nota 2: ");
        scanf("%f", &alumnos[i].nota2);
        printf("Ingrese nota 3: ");
        scanf("%f", &alumnos[i].nota3);
        getchar(); // Limpiar buffer de entrada

        promedios[i] = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3) / 3.0f;
    }

    // Buscar el mejor promedio
    for (i = 1; i < CANT_ALUMNOS; i++) {
        if (promedios[i] > promedios[idx_mejor]) {
            idx_mejor = i;
        }
    }

    printf("\nEl alumno con el mejor promedio es: %s (%.2f)\n", alumnos[idx_mejor].nombre, promedios[idx_mejor]);

    return 0;
}