/**
 * Escribí un programa en C que le pida al usuario ingresar una palabra o frase 
 * y luego muestre cuántos caracteres tiene (sin contar el \n). strlen()
 */
#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];

    printf("Ingrese una palabra o frase: ");
    fgets(input, sizeof(input), stdin);

    // Remover el salto de línea (\n) si está presente
    size_t length = strlen(input);
    
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--; // Ajustar la longitud
    }

    printf("La cantidad de caracteres es: %zu\n", length);

    return 0;
}