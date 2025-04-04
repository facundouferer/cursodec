/*
División
Pide al usuario dos números decimales y muestra el resultado de la división.
*/

#include <stdio.h>

int main()
{
    float num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    if (num2 != 0)
    {
        resultado = num1 / num2;
        printf("El resultado de la división es: %.2f\n", resultado);
    }
    else
    {
        printf("Error: No se puede dividir por cero.\n");
    }

    return 0;
}