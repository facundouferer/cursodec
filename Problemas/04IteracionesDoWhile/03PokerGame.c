/*
Haga un programa que permita emular un juego de poker de alta-baja. El usuario debe adivinar el valor de una carta diciendo si es alta o baja y debe acertar si el valor de la carta es inferior a 7 (baja) o superior a 7 (alta) y si sale 7, pierde.
Al finalizar el juego debe mostrar la carta que salió.
El juego sigue mientras el usuario acierta la carta ganadora.
Al perder se muestra la cantidad de puntos que van aumentando en dobles, es decir, inicia en uno, luego 2, luego 4, luego 8.
Las cartas de poker van del 1 al 13.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int puntos = 1;
    char eleccion;
    int carta;

    srand(time(NULL));

    do
    {
        carta = rand() % 13 + 1;

        printf("\nAdivine si la carta es alta (a) o baja (b): ");
        scanf(" %c", &eleccion);

        if (carta == 7)
        {
            printf("La carta es %d. ¡Perdiste!\n", carta);
            break;
        }

        if ((eleccion == 'a' && carta > 7) || (eleccion == 'b' && carta < 7))
        {
            printf("¡Correcto! La carta era %d.\n", carta);
            puntos *= 2;
        }
        else
        {
            printf("¡Incorrecto! La carta era %d. ¡Perdiste!\n", carta);
            break;
        }
    } while (puntos > 1);

    printf("\nPuntaje final: %d", puntos);
    return 0;
}