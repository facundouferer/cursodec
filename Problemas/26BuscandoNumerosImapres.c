#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 98, 12};

    int size = sizeof(original) / sizeof(original[0]);
    
    int modified[size];

    for (int i = 0; i < size; i++) {
        if (original[i] % 2 != 0) {
            modified[i] = original[i] * 2;
        } else {
            modified[i] = original[i];
        }
    }

    printf("Arreglo modificado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", modified[i]);
    }
    printf("\n");

    return 0;
}