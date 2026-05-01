#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[30];
    int edad;
};

int main() {
    struct Persona p1, p2;

    // Ingreso datos de la primera persona
    printf("Nombre de la primera persona: ");
    fgets(p1.nombre, sizeof(p1.nombre), stdin);
    p1.nombre[strcspn(p1.nombre, "\n")] = '\0';

    printf("Edad de la primera persona: ");
    scanf("%d", &p1.edad);
    getchar(); // Limpiamos el buffer

    // Ingreso datos de la segunda persona
    printf("Nombre de la segunda persona: ");
    fgets(p2.nombre, sizeof(p2.nombre), stdin);
    p2.nombre[strcspn(p2.nombre, "\n")] = '\0';

    printf("Edad de la segunda persona: ");
    scanf("%d", &p2.edad);

    // Comparamos las edades
    printf("\nComparación:\n");
    if (p1.edad > p2.edad) {
        printf("%s es mayor que %s.\n", p1.nombre, p2.nombre);
    } else if (p1.edad < p2.edad) {
        printf("%s es mayor que %s.\n", p2.nombre, p1.nombre);
    } else {
        printf("Ambos tienen la misma edad.\n");
    }

    return 0;
}
