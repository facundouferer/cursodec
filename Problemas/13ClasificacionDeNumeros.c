/*Clasificación de Números
Solicita un número al usuario y determina si es positivo, negativo o cero.
Si es positivo, verifica si es par o impar.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("El número es positivo.\n");
        if (numero % 2 == 0)
        {
            printf("El número es par.\n");
        }
        else
        {
            printf("El número es impar.\n");
        }
    }
    else if (numero < 0)
    {
        printf("El número es negativo.\n");
    }
    else
    {
        printf("El número es cero.\n");
    }

    return 0;
}