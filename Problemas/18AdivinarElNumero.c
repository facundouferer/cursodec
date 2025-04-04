/*Juego de Adivinanza con Intentos Limitados
Crea un programa en C que genere un número aleatorio entre 1 y 100. El usuario debe adivinar el número en un máximo de 7 intentos.
El usuario ingresa un número y el programa responde
"Muy alto" si el número es mayor al generado.
"Muy bajo" si es menor.
"¡Adivinaste!" si es correcto.
Si el usuario no acierta en 7 intentos, el programa muestra el número secreto.
El usuario puede jugar nuevamente al finalizar, a menos que seleccione la opción de no jugar.
Es importante que se guarde la cantidad de veces que el usuario ganó y se muestre al final cuando coloca que ya no quiere seguir jugando.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroSecreto, intento, intentosRestantes, jugarNuevamente, victorias = 0;
    char respuesta;

    srand(time(NULL));

    do
    {
        numeroSecreto = rand() % 100 + 1;
        intentosRestantes = 7;
        printf("¡Bienvenido al juego de adivinanza!\n");
        printf("He generado un número entre 1 y 100. Tienes 7 intentos para adivinarlo.\n");

        while (intentosRestantes > 0)
        {
            printf("Ingresa tu intento: ");
            scanf("%d", &intento);

            if (intento == numeroSecreto)
            {
                printf("¡Adivinaste!\n");
                victorias++;
                break;
            }
            else if (intento > numeroSecreto)
            {
                printf("Muy alto.\n");
            }
            else
            {
                printf("Muy bajo.\n");
            }

            intentosRestantes--;
            if (intentosRestantes > 0)
            {
                printf("Te quedan %d intentos.\n", intentosRestantes);
            }
            else
            {
                printf("Lo siento, te quedaste sin intentos. El número secreto era %d.\n", numeroSecreto);
            }
        }

        printf("¿Quieres jugar nuevamente? (s/n): ");
        scanf(" %c", &respuesta);
        jugarNuevamente = (respuesta == 's' || respuesta == 'S');

    } while (jugarNuevamente);

    printf("Gracias por jugar. Ganaste %d veces. ¡Hasta la próxima!\n", victorias);

    return 0;
}