/**
 Problema 01: Crear un programa que pida al usuario el ingreso de
 3 frases y las órdenes de mayor a menor teniendo en cuenta
 la cantidad de caracteres.
 */
#include <stdio.h>
#include <string.h>

#define LARGO_MAXIMO 100 // Longitud máxima de las frases

int main()
{
    char frase1[LARGO_MAXIMO], frase2[LARGO_MAXIMO], frase3[LARGO_MAXIMO];
    int A, B, C;

    // Solicitar al usuario que ingrese 3 frases
    printf("Ingrese la primera frase: ");
    fgets(frase1, LARGO_MAXIMO, stdin);

    printf("Ingrese la segunda frase: ");
    fgets(frase2, LARGO_MAXIMO, stdin);

    printf("Ingrese la tercera frase: ");
    fgets(frase3, LARGO_MAXIMO, stdin);

    A = strlen(frase1);
    B = strlen(frase2);
    C = strlen(frase3);

    if (A > B)
    {
        if (B > C)
        {
            printf("%s\n%s\n%s\n", frase1, frase2, frase3);
        }
        else
        {
            if (A > C)
            {
                printf("%s\n%s\n%s\n", frase1, frase3, frase2);
            }
            else
            {
                printf("%s\n%s\n%s\n", frase3, frase1, frase2);
            }
        }
    }
    else
    {
        if (C > B)
        {
            printf("%s\n%s\n%s\n", frase3, frase2, frase1);
        }
        else
        {
            if (A > C)
            {
                printf("%s\n%s\n%s\n", frase2, frase1, frase3);
            }
            else
            {
                printf("%s\n%s\n%s\n", frase2, frase3, frase1);
            }
        }
    }

    return 0;
}