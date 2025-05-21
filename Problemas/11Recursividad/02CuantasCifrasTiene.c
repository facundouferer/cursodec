#include <stdio.h>

// Función recursiva para contar los dígitos de un número
int contarDigitos(int n) {
    // Caso base: si el número es menor a 10, tiene un solo dígito
    if (n < 10) {
        return 1;
    } else {
        // Llamada recursiva: divide el número por 10 y suma 1
        return 1 + contarDigitos(n / 10);
    }
}

int main() {
    int numero;

    // Pedimos al usuario un número entero positivo
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    // Validamos que sea un número positivo
    if (numero <= 0) {
        printf("Por favor, ingrese un número mayor a cero.\n");
        return 1;
    }

    // Llamamos a la función y mostramos el resultado
    int cantidad = contarDigitos(numero);
    printf("El número %d tiene %d dígito(s).\n", numero, cantidad);

    return 0;
}
