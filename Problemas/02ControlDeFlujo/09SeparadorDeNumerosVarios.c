/*
Separador de números
Haga un programa que ingresado un número de 4 cifras y los separe en cifras,
por ejemplo si ingreso 1234 me muestra 1, 2, 3 y 4.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número de 4 cifras: ");
    scanf("%d", &numero);

    if (numero >= 1000 && numero <= 9999)
    {
        int mil = numero / 1000;
        int cent = (numero / 100) % 10;
        int dec = (numero / 10) % 10;
        int uni = numero % 10;

        printf("Las cifras son: %d, %d, %d, %d\n", mil, cent, dec, uni);
    }
    else
    {
        printf("El número ingresado no tiene 4 cifras.\n");
    }

    return 0;
}