/*Mayor de tres números
El programa debe solicitar tres números y mostrar cuál es el mayor.
Si hay dos números iguales al mayor, indicarlo.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Determinar el mayor número
    if (num1 >= num2 && num1 >= num3)
    {
        mayor = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        mayor = num2;
    }
    else
    {
        mayor = num3;
    }

    // Mostrar el mayor número
    printf("El mayor número es: %d\n", mayor);

    // Verificar si hay números iguales al mayor
    if ((mayor == num1 && mayor == num2) || (mayor == num1 && mayor == num3) || (mayor == num2 && mayor == num3))
    {
        printf("Hay al menos dos números iguales al mayor.\n");
    }

    return 0;
}