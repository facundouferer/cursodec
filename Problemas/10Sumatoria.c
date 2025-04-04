/*
Sumatoria
El programa debe solicitar al usuario un número N y calcular la suma de los primeros N números enteros.
*/

#include <stdio.h>

int main()
{
    int N, sum = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    printf("La suma de los primeros %d números enteros es: %d\n", N, sum);

    return 0;
}