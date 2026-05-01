#include <stdio.h>

int main()
{
    int nota, sumNotas, cantNotas;
    float promedio = 0;
    printf("Ingrese la cant notas: ");
    scanf("%d", &cantNotas);

    for (int i = 1; i <= cantNotas; i++)
    {
        printf("Nota: ");
        scanf("%d", &nota);
        sumNotas += nota;
    }

    promedio = (float)sumNotas / cantNotas;
    printf("Promedio: %.2f \n", promedio);

    return 0;
}