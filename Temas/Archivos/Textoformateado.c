#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre[50];
    int edad;

    // Escribimos nombre y edad de 3 personas
    archivo = fopen("personas.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    printf("Ingrese nombre y edad de 3 personas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Persona %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", nombre);
        printf("Edad: ");
        scanf("%d", &edad);

        // Guardamos los datos formateados en el archivo
        fprintf(archivo, "%s %d\n", nombre, edad);
    }

    fclose(archivo);

    // Ahora leemos los datos formateados del archivo
    archivo = fopen("personas.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("\nPersonas leídas del archivo:\n");
    while (fscanf(archivo, "%s %d", nombre, &edad) == 2) {
        printf("Nombre: %s, Edad: %d\n", nombre, edad);
    }

    fclose(archivo);
    return 0;
}
