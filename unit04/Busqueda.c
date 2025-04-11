#include <stdio.h>

int main() {
    int numeros[5] = {3, 7, 9, 1, 4};
    int buscado = 9;
    int encontrado = 0;
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == buscado) {
            printf("Encontrado en la posición %d\n", i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("No encontrado.\n");
    }
    return 0;
}