#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int numeroSecreto = rand() % 100 + 1;

    printf("El numero secreto es: %d\n", numeroSecreto);

    return 0;
}