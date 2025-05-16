#include <stdio.h>

#define TAM_NOMBRE 50

struct Estudiante{
    char nombre[TAM_NOMBRE];
    int edad;
    float promedio;
} ;

int main() {
    struct Estudiante estudiante;

    printf("Ingrese el nombre del estudiante: ");
    fgets(estudiante.nombre, TAM_NOMBRE, stdin);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    printf("\nDatos del estudiante:\n");
    printf("Nombre: %s", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);

    return 0;
}