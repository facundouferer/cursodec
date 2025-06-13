#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *archivo;
    char nombre[50];
    char respuesta;

    // Abrir el archivo en modo escritura (append)
    archivo = fopen("../nombres.txt", "a");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    do {
        printf("Ingrese un nombre: ");
        scanf("%s", nombre);

        // Escribir el nombre en el archivo
        fprintf(archivo, "%s\n", nombre);

        printf("¿Desea seguir escribiendo nombres? (s/n): ");
        scanf(" %c", &respuesta); // El espacio antes de %c es para consumir el salto de línea anterior

    } while (respuesta == 's' || respuesta == 'S');

    // Cerrar el archivo de escritura
    fclose(archivo);

    // Abrir el archivo en modo lectura
    archivo = fopen("../nombres.txt", "r");

    if (archivo == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }

    printf("\nNombres guardados en el archivo:\n");

    // Leer y mostrar los nombres del archivo
    while (fgets(nombre, sizeof(nombre), archivo) != NULL) {
        // Eliminar el salto de línea si existe
        nombre[strcspn(nombre, "\n")] = 0;
        printf("%s\n", nombre);
    }

    // Cerrar el archivo de lectura
    fclose(archivo);

    return 0;
}
