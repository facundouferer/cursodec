#include <stdio.h>
#include "input.h"
#include "operaciones.h"

int main() {
    int a, b, c;
    pedirNumeros(&a, &b, &c);

    printf("\nResultados:\n");

    printf("%d es %s\n", a, esPar(a) ? "par" : "impar");
    printf("%d es %s\n", b, esPar(b) ? "par" : "impar");
    printf("%d es %s\n", c, esPar(c) ? "par" : "impar");

    printf("Máximo: %d\n", maximo(a, b, c));
    printf("Promedio: %.2f\n", promedio(a, b, c));

    return 0;
}
