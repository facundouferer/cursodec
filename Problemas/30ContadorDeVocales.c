/**
 * Contador de vocales
Escribí un programa que lea una frase y cuente cuántas vocales tiene.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int contador = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("La cantidad de vocales es: %d\n", contador);

    return 0;
}