#include <stdio.h>

int main()
{
    int opcion;

    do
    {
        printf("\nMENU:\n");
        printf("1 - Suma\n");
        printf("2 - Resta\n");
        printf("3 - Tabla de multiplicación de un número\n");
        printf("0 - Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            int a, b;
            printf("Primer número: ");
            scanf("%d", &a);
            printf("Segundo número: ");
            scanf("%d", &b);
            printf("El resultado de la suma es: %d\n", a + b);
            break;
        }
        case 2:
        {
            int a, b;
            printf("Primer número: ");
            scanf("%d", &a);
            printf("Segundo número: ");
            scanf("%d", &b);
            printf("El resultado de la resta es: %d\n", a - b);
            break;
        }
        case 3:
        {
            int numero, limite;
            printf("Ingrese el número: ");
            scanf("%d", &numero);
            printf("Límite de la tabla: ");
            scanf("%d", &limite);
            printf("Tabla de multiplicación del %d hasta el %d:\n", numero, limite);
            for (int i = 1; i <= limite; i++)
            {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
            break;
        }
        case 0:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida. Intente nuevamente.\n");
            break;
        }
    } while (opcion != 0);

    return 0;
}