// main.c
#include <stdio.h>
#include "operaciones.h"

int main() {
    int x = 5, y = 3;

    int suma = sumar(x, y);
    int producto = multiplicar(x, y);

    printf("Suma: %d\n", suma);
    printf("Producto: %d\n", producto);

    return 0;
}
