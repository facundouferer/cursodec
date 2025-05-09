#include <stdio.h>

int main() {
    int arr[] = {7, 4, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Intercambio
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Arreglo ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
