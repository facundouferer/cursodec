#include <stdio.h>

int doble(int n) {
    return n * 2;
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int resultado = doble(numero);
    printf("El doble es: %d\n", resultado);

    return 0;
}
