/**
 * Invertir una Frase
Pedí una frase y mostrar la frase invertida. 
Por ejemplo, si el usuario ingresa "Hola mundo", 
el programa debe mostrar "odnum aloH".

 */
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char frase[MAX_LEN];
    int longitud, i;

    printf("Ingrese una frase: ");
    fgets(frase, MAX_LEN, stdin);

    // Eliminar el salto de línea al final si existe
    longitud = strlen(frase);
    if (frase[longitud - 1] == '\n') {
        frase[longitud - 1] = '\0';
        longitud--;
    }

    printf("Frase invertida: ");
    for (i = longitud - 1; i >= 0; i--) {
        putchar(frase[i]);
    }
    printf("\n");

    return 0;
}