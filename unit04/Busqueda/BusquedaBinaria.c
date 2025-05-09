#include <stdio.h>

int main() {
    int arreglo[] = {3, 7, 15, 20, 25, 31, 40}; // Arreglo ORDENADO
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int buscar, inicio = 0, fin = n - 1, medio;
    int encontrado = 0;
    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &buscar);
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (arreglo[medio] == buscar) {
            printf("Numero encontrado en la posicion %d.\n", medio);
            encontrado = 1;
            break;
        } else if (buscar < arreglo[medio]) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }
    if (!encontrado) {
        printf("El numero no se encuentra en el arreglo.\n");
    }
    return 0;
}
