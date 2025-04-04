/*Separador de números
Haga un programa que ingresado un número de 2 cifras y los separa la primera cifra y la segunda,
por ejemplo si ingreso 12 me muestra 1  y 2.
*/

#include <stdio.h>

int main()
{
    int numero, primeraCifra, segundaCifra;

    printf("Ingrese un número de 2 cifras: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 99)
    {
        primeraCifra = numero / 10;
        segundaCifra = numero % 10;

        printf("Primera cifra: %d\n", primeraCifra);
        printf("Segunda cifra: %d\n", segundaCifra);
    }
    else
    {
        printf("El número ingresado no es de 2 cifras.\n");
    }

    return 0;
}