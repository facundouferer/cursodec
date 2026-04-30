#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre[50];

    // Escribir nombres
    archivo = fopen("../nombres.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("Ingrese 3 nombres:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%s", nombre);
        fprintf(archivo, "%s\n", nombre);
    }

    fclose(archivo);

    // Leer nombres
    archivo = fopen("../nombres.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("\nNombres guardados en el archivo:\n");
    while (fgets(nombre, sizeof(nombre), archivo)) {
        printf("%s", nombre);
    }

    fclose(archivo);
    return 0;
}
