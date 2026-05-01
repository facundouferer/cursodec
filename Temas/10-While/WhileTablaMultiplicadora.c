#include <stdio.h>

int main()
{
    int multiplicando = 1, contador = 1;

    while (multiplicando < 10)
    {
        while (contador < 10)
        {
            int producto = multiplicando * contador;
            printf("%d \t", producto);
            contador++;
        }
        printf("\n");
        multiplicando++;
        contador = 1;
    }
    return 0;
}