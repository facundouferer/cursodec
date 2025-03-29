#include <stdio.h>

int main()
{
    int cantidadNotas;
    float suma = 0, nota, promedio;

    printf("Ingrese la cantidad de notas que desea cargar: ");
    scanf("%d", &cantidadNotas);

    for (int i = 0; i < cantidadNotas; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);
        suma += nota;
    }

    promedio = suma / cantidadNotas;

    printf("Promedio: %.2f\n", promedio);

    return 0;
}