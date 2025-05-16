#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[30];
    int edad;
};

int main() {
    struct Persona personas[3];
    char buscado[30];
    int encontrado = 0;

    // Cargar datos de 3 personas
    for (int i = 0; i < 3; i++) {
        printf("Persona %d\n", i + 1);
        printf("Nombre: ");
        fgets(personas[i].nombre, sizeof(personas[i].nombre), stdin);
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0';

        printf("Edad: ");
        scanf("%d", &personas[i].edad);
        getchar(); // Limpiar buffer
    }

    // Pedir nombre a buscar
    printf("\nIngrese el nombre a buscar: ");
    fgets(buscado, sizeof(buscado), stdin);
    buscado[strcspn(buscado, "\n")] = '\0';

    // Buscar en el arreglo
    for (int i = 0; i < 3; i++) {
        if (strcmp(buscado, personas[i].nombre) == 0) {
            printf("Encontrado: %s tiene %d años.\n", personas[i].nombre, personas[i].edad);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Persona no encontrada.\n");
    }

    return 0;
}
