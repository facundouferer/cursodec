//LEER UN ARCHIVO DE TEXTO LÍNEA POR LÍNEA EN C
#include <stdio.h>

int main() {
    FILE *archivo = fopen("saludo.txt", "r"); // Abrir en modo lectura
    char linea[100];

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea); // Mostrar cada línea
    }

    fclose(archivo);
    return 0;
}


