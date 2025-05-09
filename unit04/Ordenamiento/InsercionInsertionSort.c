#include <stdio.h>

int main() {
    int arr[] = {8, 3, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Mueve los elementos mayores al key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Arreglo ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
