#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char line[256]; // Buffer para leer cada línea
    int total_words = 0;

    // Abre el archivo en modo lectura
    file = fopen("../texto.txt", "r");

    // Verifica si el archivo se abrió correctamente
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Lee cada línea del archivo
    while (fgets(line, sizeof(line), file) != NULL) {
        // Cuenta las palabras en la línea actual
        int in_word = 0; // Bandera para saber si estamos dentro de una palabra
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                in_word = 0; // Si encontramos un espacio o salto de línea, no estamos en una palabra
            } else if (in_word == 0) {
                in_word = 1; // Si encontramos un carácter que no es espacio y no estábamos en una palabra, es el inicio de una nueva palabra
                total_words++;
            }
        }
    }

    // Cierra el archivo
    fclose(file);

    printf("El número total de palabras en el archivo es: %d\n", total_words);
    return 0;
}