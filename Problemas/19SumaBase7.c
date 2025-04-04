/*Un sumador en base 7
Realice un programa que sume en base siete dos números de una cifras ingresadas por el usuario.
*/

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // Input two single-digit base-7 numbers
    printf("Ingrese el primer número en base 7 (0-6): ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número en base 7 (0-6): ");
    scanf("%d", &num2);

    // Validate input
    if (num1 < 0 || num1 > 6 || num2 < 0 || num2 > 6)
    {
        printf("Error: Los números deben estar en el rango 0-6.\n");
        return 1;
    }

    // Perform the addition in base 7
    sum = num1 + num2;

    // Convert the result to base 7
    if (sum >= 7)
    {
        printf("La suma en base 7 es: %d%d\n", sum / 7, sum % 7);
    }
    else
    {
        printf("La suma en base 7 es: %d\n", sum);
    }

    return 0;
}