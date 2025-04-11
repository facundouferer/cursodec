#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    // Recorrido: mostrar cada número
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }

    return 0;
}