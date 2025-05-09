/**
 * Hacé un programa que le pida al usuario una cadena y luego la copie en otra variable. 
 * Mostrá ambas en pantalla. strcpy(copia, cadena)
 */
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char copia[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Copiar la cadena
    strcpy(copia, cadena);

    // Mostrar ambas cadenas
    printf("Cadena original: %s", cadena);
    printf("Copia de la cadena: %s", copia);

    return 0;
}