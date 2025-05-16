/**
 * Comparar dos cadenas
Pedile al usuario que ingrese dos palabras. 
El programa debe comparar si son iguales o no 
y mostrar un mensaje correspondiente. strcmp()

 */
#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100];
    char palabra2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%99s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%99s", palabra2);

    if (strcmp(palabra1, palabra2) == 0) {
        printf("Las palabras son iguales.\n");
    } else {
        printf("Las palabras son diferentes.\n");
    }

    return 0;
}