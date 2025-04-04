/*
Conversor de grados
Solicita al usuario una temperatura en grados Celsius y muéstrala en Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);

    return 0;
}