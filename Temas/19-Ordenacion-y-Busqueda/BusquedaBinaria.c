#include <stdio.h>

int main()
{

    // Arreglo DESORDENADO

    int arreglo[] = {84, 12, 97, 33, 56, 21, 48, 75, 19, 62, 44, 91, 27, 83, 10, 59, 38, 70, 25, 66, 14, 93, 41, 52, 88, 30, 77, 16, 49, 61, 23, 95, 34, 57, 81, 13, 68, 40, 29, 99, 51, 74, 18, 86, 32, 65, 47, 22, 90, 37, 55, 11, 73, 28, 82, 46, 60, 20, 96, 39};

    // Ordenamiento (Bubble Sort)
    int i, j, temp;
    for (i = 0; i < sizeof(arreglo) / sizeof(arreglo[0]) - 1; i++)
    {
        for (j = 0; j < sizeof(arreglo) / sizeof(arreglo[0]) - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    // El arreglo ahora está ORDENADO, listo para la búsqueda binaria

    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int buscar, inicio = 0, fin = n - 1, medio;
    int encontrado = 0;
    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &buscar);
    while (inicio <= fin)
    {

        // mostrar el proceso de búsqueda
        printf("Buscando entre las posiciones %d y %d.\n ", inicio, fin);

        medio = (inicio + fin) / 2;

        if (arreglo[medio] == buscar)
        {
            printf("Numero encontrado en la posicion %d.\n", medio);
            encontrado = 1;
            break;
        }
        else if (buscar < arreglo[medio])
        {
            fin = medio - 1;
        }
        else
        {
            inicio = medio + 1;
        }
    }
    if (!encontrado)
    {
        printf("El numero no se encuentra en el arreglo.\n");
    }
    return 0;
}
