#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int num, inicio = 0, fin = n - 1, medio;
    int encontrado = 0;

    printf("Ingrese el número a buscar: ");
    scanf("%d", &num);

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (arr[medio] == num) {
            encontrado = 1;
            break;
        } else if (arr[medio] < num) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (encontrado) {
        printf("El número %d está presente en el arreglo.\n", num);
    } else {
        printf("El número %d NO está presente en el arreglo.\n", num);
    }

    return 0;
}