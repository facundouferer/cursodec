#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[3][3];

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            C[x][y] = 0;
            for (int k = 0; k < 3; k++) {
                C[x][y] += A[x][k] * B[k][y];
            }
        }
    }
    
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d\t ", C[x][y]);
        }
        printf("\n");
    }

    return 0;
}