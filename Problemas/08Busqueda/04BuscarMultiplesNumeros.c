#include <stdio.h>

int main() {
    int numeros[10];
    int buscar[3];
    int i, izq, der, medio, encontrado;

    // Ingresar 10 números ordenados
    printf("Ingrese 10 números ordenados:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ingresar 3 números a buscar
    printf("Ingrese 3 números a buscar:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &buscar[i]);
    }

    // Buscar cada número usando búsqueda binaria
    for (i = 0; i < 3; i++) {
        izq = 0;
        der = 9;
        encontrado = 0;
        while (izq <= der) {
            medio = (izq + der) / 2;
            if (numeros[medio] == buscar[i]) {
                encontrado = 1;
                break;
            } else if (numeros[medio] < buscar[i]) {
                izq = medio + 1;
            } else {
                der = medio - 1;
            }
        }
        if (encontrado) {
            printf("El número %d se encuentra en el arreglo.\n", buscar[i]);
        } else {
            printf("El número %d NO se encuentra en el arreglo.\n", buscar[i]);
        }
    }

    return 0;
}