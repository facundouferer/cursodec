//ESCRIBIR ARCHIVOS 
#include <stdio.h>

int main() {
    FILE *archivo = fopen("saludo.txt", "w"); // Abrir en modo escritura

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Hola mundo!\n");
    fprintf(archivo, "Este texto fue escrito desde un programa en C.\n");

    fclose(archivo); // ¡IMPORTANTE! Siempre cerrar el archivo
    printf("Texto escrito correctamente en el archivo.\n");

    return 0;
}


