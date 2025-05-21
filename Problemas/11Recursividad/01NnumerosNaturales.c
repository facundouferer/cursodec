#include <stdio.h>

// Función recursiva para sumar los primeros N números naturales
int suma(int n) {
    // Caso base: si n es 1, retorna 1 (porque 1 es la suma de los primeros 1 números)
    if (n == 1) {
        return 1;
    } else {
        // Paso recursivo: suma n con la suma de los anteriores (n-1)
        return n + suma(n - 1);
    }
}

int main() {
    int numero;

    // Solicitar al usuario un número
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    // Validar que sea positivo
    if (numero <= 0) {
        printf("El número debe ser mayor a 0.\n");
        return 1; // termina el programa con error
    }

    // Llamar a la función recursiva y mostrar el resultado
    int resultado = suma(numero);
    printf("La suma de los primeros %d números naturales es: %d\n", numero, resultado);

    return 0;
}
