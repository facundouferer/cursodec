/**
 * Crear un programa que agarre un array con 5 números y use el algoritmo de burbuja para ordenarlos de menor a mayor. Mostrarlos antes y después de ordenar.
 */
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {64, 34, 25, 12, 22};
    int n = 5;

    printf("Array antes: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array después: ");
    printArray(arr, n);

    return 0;
}