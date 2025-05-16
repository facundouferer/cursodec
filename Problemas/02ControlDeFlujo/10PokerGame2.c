#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char opcion;
    int puntos = 1, totalPuntos = 0;
    int carta;

        printf("Bienvenido al juego de Poker Alta-Baja.\n");
    printf("Debe adivinar si la carta es alta (A) o baja (B). Si sale 7, pierde.\n");

    while (1)
    {
        carta = rand() % 13 + 1;

        printf("\nIngrese su elección (A para alta, B para baja): ");
        scanf(" %c", &opcion);

        if (carta == 7)
        {
            printf("¡Salió un 7! Ha perdido.\n");
            break;
        }

        char cartaStr;

        switch (carta)
        {
        case 1:
            cartaStr = 'A';
            break;
        case 11:
            cartaStr = 'J';
            break;
        case 12:
            cartaStr = 'Q';
            break;
        case 13:
            cartaStr = 'K';
            break;
        default:
            cartaStr = carta + '0';
            break;
        }

        if ((opcion == 'A' || opcion == 'a') && carta > 7)
        {
            printf("¡Correcto! La carta fue %c (Alta).\n", cartaStr);
            totalPuntos += puntos;
            puntos *= 2;
        }
        else if ((opcion == 'B' || opcion == 'b') && carta < 7)
        {
            printf("¡Correcto! La carta fue %c (Baja).\n", cartaStr);
            totalPuntos += puntos;
            puntos *= 2;
        }
        else
        {
            printf("¡Incorrecto! La carta fue %c. Ha perdido.\n", cartaStr);
            break;
        }
    }

    printf("\nPuntaje total: %d\n", totalPuntos);
    printf("Gracias por jugar.\n");

    return 0;
}