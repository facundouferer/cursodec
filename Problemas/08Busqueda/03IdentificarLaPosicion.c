#include <stdio.h>

int main() {
    int arreglo[20] = {1, 3, 5, 7, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54};
    int numero, i, encontrado = 0;

    printf("Ingrese el número a buscar: ");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++) {
        if (arreglo[i] == numero) {
            printf("El número %d se encuentra en la posición %d.\n", numero, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("El número %d no se encuentra en el arreglo.\n", numero);
    }

    return 0;
}