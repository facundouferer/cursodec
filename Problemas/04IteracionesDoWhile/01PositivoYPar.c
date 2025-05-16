/*
El número es positivo y par
El programa debe pedir,  hasta que el usuario indique que ya no debe ingresar más notas, una nota (0-100) e indicar la calificación:
90-100: Sobresaliente
80-89: Muy Bueno
70-79: Bueno
60-69: Aprobado
Menos de 60: Reprobado
*/

#include <stdio.h>

int main()
{
    int nota;
    char continuar;

    do
    {
        printf("Ingrese una nota (0-100): ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 100)
        {
            printf("Nota fuera de rango. Intente nuevamente.\n");
        }
        else
        {
            if (nota >= 90)
            {
                printf("Calificación: Sobresaliente\n");
            }
            else if (nota >= 80)
            {
                printf("Calificación: Muy Bueno\n");
            }
            else if (nota >= 70)
            {
                printf("Calificación: Bueno\n");
            }
            else if (nota >= 60)
            {
                printf("Calificación: Aprobado\n");
            }
            else
            {
                printf("Calificación: Reprobado\n");
            }
        }

        printf("¿Desea ingresar otra nota? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}