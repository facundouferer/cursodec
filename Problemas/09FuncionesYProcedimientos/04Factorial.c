#include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("El factorial de %d es: %d\n", numero, factorial(numero));
    } else {
        printf("No se puede calcular el factorial de un numero negativo.\n");
    }

    return 0;
}
