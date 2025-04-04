/*
Edad y categoría
Solicita la edad de una persona y clasifica en:
Menor de edad (<18 años)
Adulto (18-64 años)
Adulto mayor (≥65 años)
*/

#include <stdio.h>

int main()
{
    int edad;

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &edad);

    if (edad < 18)
    {
        printf("Menor de edad\n");
    }
    else if (edad >= 18 && edad <= 64)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Adulto mayor\n");
    }

    return 0;
}