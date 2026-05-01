#include <stdio.h>

int main()
{
    int numeros[3] = {3, 2, 5};

    int resultado;
    // Recorrido: mostrar cada número
    for (int i = 0; i < 3; i++)
    {
        resultado = numeros[i] * numeros[i];
        printf("%d ", resultado);
    }

    return 0;
}