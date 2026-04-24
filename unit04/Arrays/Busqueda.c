#include <stdio.h>

int main()
{
    // rellenado del array
    int numeros[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un número: ");
        scanf("%d", &numeros[i]);
    }

    // pedido de búsqueda al usurio
    printf("Ingrese el número a buscar: ");
    int buscado = 0;
    scanf("%d", &buscado);

    // búsqueda del número
    int encontrado = 0;
    for (int i = 0; i < 5; i++)
    {
        // caso positivo
        if (numeros[i] == buscado)
        {
            printf("Encontrado en la posición %d\n", i);
            encontrado = 1;
            break;
        }
    }
    // caso negativo
    if (!encontrado)
    {
        printf("No encontrado.\n");
    }

    return 0;
}