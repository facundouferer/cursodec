/**
 * Contador de Palabras
Escribí un programa que reciba una oración por teclado y cuente cuántas palabras contiene.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char oracion[1000];
    int contador = 0;
    int enPalabra = 0;

    printf("Ingrese una oración: ");
    fgets(oracion, sizeof(oracion), stdin);

    for (int i = 0; oracion[i] != '\0'; i++) {
        if (oracion[i] != ' ' && oracion[i] != '\n') {
            if (!enPalabra) {
                contador++;
                enPalabra = 1;
            }
        } else {
            enPalabra = 0;
        }
    }

    printf("La oración contiene %d palabras.\n", contador);

    return 0;
}