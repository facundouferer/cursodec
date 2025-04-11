#include <stdio.h>

int main(void) {
    int numeros[] = {10, 20, 30, 40, 50};
    int size = sizeof(numeros) / sizeof(numeros[0]);
    // Imprime el arreglo original
    printf("Arreglo original:\n");
    for (int i = 0; i < size; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    // Recorre el arreglo y reemplaza el valor en la posición 2
    for (int i = 0; i < size; i++) {
        if (i == 2) {
            numeros[i] = 100; // Reemplaza el valor en la posición 2
        }
    }
    // Imprime el arreglo modificado
    printf("\nArreglo modificado:\n");
    for (int i = 0; i < size; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    return 0;
}