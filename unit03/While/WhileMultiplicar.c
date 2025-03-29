#include <stdio.h>

int main()
{
    int numero, i = 1;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    while (i <= 10)
    {
        int producto = numero * i;
        printf("%d x %d = %d\n", numero, i, producto);
        i++;
    }
    return 0;
}