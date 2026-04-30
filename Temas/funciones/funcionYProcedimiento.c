#include <stdio.h>

int cuadrado(int x) {
    return x * x;
}

void mostrarResultado(int numero, int resultado) {
    printf("El cuadrado de %d es %d\n", numero, resultado);
}

int main() {
    int n = 4;
    int res = cuadrado(n);
    mostrarResultado(n, res);
    return 0;
}
