#include <stdio.h>
#include <string.h>

int main() {
    char *diccionario[10] = {
        "arbol",
        "casa",
        "computadora",
        "gato",
        "libro",
        "mesa",
        "perro",
        "puerta",
        "silla",
        "ventana"
    };

    char palabra[50];
    int inicio = 0, fin = 9, medio, encontrado = 0;

    printf("Ingrese una palabra: ");
    scanf("%49s", palabra);

    while (inicio <= fin && !encontrado) {
        medio = (inicio + fin) / 2;
        int cmp = strcmp(palabra, diccionario[medio]);
        if (cmp == 0) {
            encontrado = 1;
        } else if (cmp < 0) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }

    if (encontrado) {
        printf("La palabra '%s' existe en el diccionario.\n", palabra);
    } else {
        printf("La palabra '%s' NO existe en el diccionario.\n", palabra);
    }

    return 0;
}