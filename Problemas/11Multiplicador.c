/*Tabla de multiplicar
Pide al usuario un número y muestra su tabla de multiplicar del 1 al 10.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}