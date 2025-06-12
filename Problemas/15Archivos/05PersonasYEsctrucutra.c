#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para representar una persona
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    FILE *archivo;
    struct Persona persona;
    char opcion;

    printf("Que desea hacer? (g: guardar personas, l: leer archivo): ");
    scanf(" %c", &opcion);

    if (opcion == 'g') {
        // Abrir el archivo en modo escritura (append)
        archivo = fopen("personas.txt", "a");
        if (archivo == NULL) {
            perror("Error al abrir el archivo");
            return 1;
        }

        char respuesta;
        do {
            printf("Ingrese el nombre de la persona: ");
            scanf("%s", persona.nombre);
            printf("Ingrese la edad de la persona: ");
            scanf("%d", &persona.edad);

            // Escribir los datos en el archivo
            fprintf(archivo, "%s %d\n", persona.nombre, persona.edad);

            printf("Desea ingresar otra persona? (s/n): ");
            scanf(" %c", &respuesta);
        } while (respuesta == 's' || respuesta == 'S');

        // Cerrar el archivo
        fclose(archivo);
        printf("Datos guardados en personas.txt\n");

    } else if (opcion == 'l') {
        // Abrir el archivo en modo lectura
        archivo = fopen("personas.txt", "r");
        if (archivo == NULL) {
            perror("Error al abrir el archivo");
            return 1;
        }

        printf("\nDatos del archivo personas.txt:\n");
        // Leer y mostrar los datos del archivo
        while (fscanf(archivo, "%s %d", persona.nombre, &persona.edad) != EOF) {
            printf("Nombre: %s, Edad: %d\n", persona.nombre, persona.edad);
        }

        // Cerrar el archivo
        fclose(archivo);

    } else {
        printf("Opcion invalida.\n");
    }

    return 0;
}
