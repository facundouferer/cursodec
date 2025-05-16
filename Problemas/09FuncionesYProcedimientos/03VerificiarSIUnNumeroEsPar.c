#include <stdio.h>

int esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (esPar(numero)) {
        printf("El numero es par.\n");
    } else {
        printf("El numero es impar.\n");
    }

    return 0;
}
