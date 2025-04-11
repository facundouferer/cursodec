#include <stdio.h>

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("Ingrese los elementos de la matriz A (3x3):\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("Elemento [%d][%d]: ", x, y);
            scanf("%d", &A[x][y]);
        }
    }

    printf("\nIngrese los elementos de la matriz B (3x3):\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("Elemento [%d][%d]: ", x, y);
            scanf("%d", &B[x][y]);
        }
    }

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            C[x][y] = 0;
            for (int k = 0; k < 3; k++) {
                C[x][y] += A[x][k] * B[k][y];
            }
        }
    }

    printf("\nResultado de la multiplicación de matrices A y B:\n");
    
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d\t ", C[x][y]);
        }
        printf("\n");
    }

    return 0;
}