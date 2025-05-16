#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, left = 0, right = n - 1, first = -1, last = -1, mid;

    printf("Ingrese el número a buscar: ");
    scanf("%d", &x);

    // Buscar la primera aparición de x
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            first = mid;
            right = mid - 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Buscar la última aparición de x
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            last = mid;
            left = mid + 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (first == -1) {
        printf("El número %d no aparece en el arreglo.\n", x);
    } else {
        printf("El número %d aparece %d veces.\n", x, last - first + 1);
    }

    return 0;
}