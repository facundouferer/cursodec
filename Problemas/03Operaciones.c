/*
Operaciones
Escribe un programa que pida al usuario dos números enteros, los sume, los reste, los reste y los multiplique y muestre el resultado.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    int suma, resta, multiplicacion;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("La suma de los números es: %d\n", suma);
    printf("La resta de los números es: %d\n", resta);
    printf("La multiplicación de los números es: %d\n", multiplicacion);

    return 0;
}