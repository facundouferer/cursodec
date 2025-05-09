/**
 * Eliminar espacios
Pedí al usuario una frase con espacios y mostrá esa frase sin espacios.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], sinEspacios[100];
    int j = 0;

    printf("Ingrese una frase con espacios: ");
    fgets(frase, sizeof(frase), stdin);

    // Eliminar espacios
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            sinEspacios[j++] = frase[i]; 
        }
    }
    sinEspacios[j] = '\0'; // Terminar la cadena

    printf("Frase sin espacios: %s\n", sinEspacios);

    return 0;
}