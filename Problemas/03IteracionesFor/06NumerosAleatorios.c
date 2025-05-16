#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));

    printf("Primeros 50 números aleatorios:\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", rand() % 100);
    }

    return 0;
}