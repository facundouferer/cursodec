#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, max_idx, temp;

    // Leer 10 números
    printf("Ingrese 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordenar por selección de mayor a menor
    for(i = 0; i < 9; i++) {
        max_idx = i;
        for(j = i + 1; j < 10; j++) {
            if(numeros[j] > numeros[max_idx]) {
                max_idx = j;
            }
        }
        // Intercambiar
        temp = numeros[i];
        numeros[i] = numeros[max_idx];
        numeros[max_idx] = temp;
    }

    // Mostrar el arreglo ordenado
    printf("Numeros ordenados de mayor a menor:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}