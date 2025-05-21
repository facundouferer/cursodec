#include <stdio.h>

// Función recursiva para mostrar un número en reversa
void mostrarReversa(int n) {
    if (n < 10) {
        // Caso base: si queda un solo dígito, lo imprimimos directamente
        printf("%d", n);
    } else {
        // Imprimimos el último dígito
        printf("%d", n % 10);
        // Llamamos recursivamente con el número sin el último dígito
        mostrarReversa(n / 10);
    }
}

int main() {
    int numero;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    // Validamos que el número sea positivo
    if (numero < 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    printf("Número en reversa: ");
    mostrarReversa(numero);
    printf("\n");

    return 0;
}
