/*
Carga de Notas
Crear un programa que solicite al usuario la cantidad de notas que ingresará y permita su carga y al finalizar la carga muestre el promedio.
*/

#include <stdio.h>

int main()
{
    int cantidadNotas;
    float suma = 0, nota, promedio;

    printf("Ingrese la cantidad de notas que ingresará: ");
    scanf("%d", &cantidadNotas);

    for (int i = 0; i < cantidadNotas; i++)
    {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &nota);
        suma += nota;
    }

    promedio = suma / cantidadNotas;
    printf("El promedio de las notas es: %.2f\n", promedio);

    return 0;
}