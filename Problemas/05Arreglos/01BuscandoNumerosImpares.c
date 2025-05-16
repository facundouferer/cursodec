#include <stdio.h>

int main() {
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    int i;

    // Duplicar los valores impares
    for(i = 0; i < tam; i++) {
        if(arreglo[i] % 2 != 0) {
            arreglo[i] = arreglo[i] * 2;
        }
    }

    // Mostrar el nuevo arreglo
    printf("Arreglo modificado:\n");
    for(i = 0; i < tam; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}