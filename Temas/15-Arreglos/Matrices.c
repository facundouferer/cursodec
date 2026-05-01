#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Recorrer la matriz
    for (int fila = 0; fila < 2; fila++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matriz[fila][col]);
        }
        printf("\n");
    }

    return 0;
}