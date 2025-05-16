/*
Suma de números enteros
Escribe un programa que pida al usuario dos números enteros, los sume y muestre el resultado.
 */
#include <stdio.h>

int main()
{
    int num1, num2, suma;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de los dos números es: %d\n", suma);

    return 0;
}