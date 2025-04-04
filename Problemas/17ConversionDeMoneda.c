/*Conversión de moneda
El usuario elige la conversión:
Dólares a Euros
Dólares a Pesos
Euros a Dólares
*/

#include <stdio.h>

int main()
{
    int opcion;
    float cantidad, resultado;
    const float dolarAEuro = 0.85;
    const float dolarAPeso = 100.0;
    const float euroADolar = 1.18;

    printf("Seleccione la conversión que desea realizar:\n");
    printf("1. Dólares a Euros\n");
    printf("2. Dólares a Pesos\n");
    printf("3. Euros a Dólares\n");
    printf("Ingrese su opción (1-3): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 3)
    {
        printf("Opción no válida.\n");
        return 1;
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch (opcion)
    {
    case 1:
        resultado = cantidad * dolarAEuro;
        printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
        break;
    case 2:
        resultado = cantidad * dolarAPeso;
        printf("%.2f Dólares son %.2f Pesos.\n", cantidad, resultado);
        break;
    case 3:
        resultado = cantidad * euroADolar;
        printf("%.2f Euros son %.2f Dólares.\n", cantidad, resultado);
        break;
    }

    return 0;
}