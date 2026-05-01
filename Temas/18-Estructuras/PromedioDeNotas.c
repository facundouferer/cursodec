#include <stdio.h>

// Estructura que representa un estudiante
struct Estudiante {
    char nombre[30];
    float nota1, nota2, nota3;
};

int main() {
    struct Estudiante e;
    float promedio;

    // Ingreso de datos
    printf("Ingrese nombre del estudiante: ");
    fgets(e.nombre, sizeof(e.nombre), stdin);
    e.nombre[strcspn(e.nombre, "\n")] = '\0';

    printf("Ingrese nota 1: ");
    scanf("%f", &e.nota1);
    printf("Ingrese nota 2: ");
    scanf("%f", &e.nota2);
    printf("Ingrese nota 3: ");
    scanf("%f", &e.nota3);

    // Cálculo del promedio
    promedio = (e.nota1 + e.nota2 + e.nota3) / 3;

    // Mostrar resultado
    printf("\nEstudiante: %s\n", e.nombre);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
