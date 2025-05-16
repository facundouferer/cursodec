#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int numbers[SIZE];
    srand((unsigned int)time(NULL));

    // Generar números aleatorios entre 1 y 100
    for(int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    printf("Antes de ordenar:\n");
    printArray(numbers, SIZE);

    insertionSort(numbers, SIZE);

    printf("Después de ordenar:\n");
    printArray(numbers, SIZE);

    return 0;
}