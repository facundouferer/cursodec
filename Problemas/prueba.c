#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numero = rand() % 15 + 1;
    printf("ESTUDIANTE: %d\n", numero);

    return 0;
}