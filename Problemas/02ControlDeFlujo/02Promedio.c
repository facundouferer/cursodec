/*
Promedio
Solicita tres notas al usuario y muestra el promedio solo si todas son válidas.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, promedio;

    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);

    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    if (nota1 >= 0 && nota2 >= 0 && nota3 >= 0) {
        promedio = (nota1 + nota2 + nota3) / 3;
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("Las notas deben ser mayores o iguales a 0.\n");
    }

    return 0;
}