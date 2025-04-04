/*
Operaciones básicas
Solicita dos números y muestra el resultado de:
Suma
Resta
Multiplicación
División
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicación: %.2f\n", num1 * num2);

    if (num2 != 0)
    {
        printf("División: %.2f\n", num1 / num2);
    }
    else
    {
        printf("División: No se puede dividir por cero.\n");
    }

    return 0;
}