#include <stdio.h>

int main()
{
    int calificacion, suma = 0, cont = 0;
    float promedio;
    char rep = 's';
    while (rep == 's' || rep == 'S')
    {
        printf("Ingrese una calificacion: ");
        scanf("%d", &calificacion);
        if (calificacion >= 0 && calificacion <= 10)
        {
            suma = suma + calificacion;
            cont = cont + 1;
        }
        else if (calificacion == -1)
        {
            break;
        }
        else
        {
            printf("Error: La calificacion va de 0 a 10\n");
        }
        printf("Quiere ingresar la calificacion de otro estudiante? (s/n): ");
        scanf(" %c", &rep);
    }
    if (cont > 0)
    {
        promedio = (suma / cont);
        printf("Resultados\n");
        printf("La cantidad de calificaciones ingresadas es: %d\n", cont);
        printf("El promedio de las calificaciones es: %.2f\n", promedio);
    }
    return 0;
}