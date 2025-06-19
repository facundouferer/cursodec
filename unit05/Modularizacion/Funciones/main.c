// main.c
// Función principal
#include <stdio.h>
#include "funciones.h"
int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    // Mostrar si cada número es par
    printf("%d %s par.\n", num1, esPar(num1) ? "es" : "no es");
    printf("%d %s par.\n", num2, esPar(num2) ? "es" : "no es");
    // Mostrar el máximo
    printf("El número mayor es: %d\n", maximo(num1, num2));
    // Mostrar el promedio
    printf("El promedio es: %.2f\n", promedio(num1, num2));
    return 0;
}

