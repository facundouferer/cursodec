/*
Crear un programa que genere operaciones matemáticas entre números aleatorios de 2 cifras.
La operación aleatoria entre , suma, resta y multiplicación. El usuario debe colocar el resultado
y si es correcto puede seguir hasta que se equivoque.
Si acierta suma un punto y sigue haciendo la operación, en caso de perder se le muestra cuántos puntos ganó.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int puntos = 0;
    int num1, num2, respuesta, resultado;
    char operador;
    int operacion;

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    printf("Bienvenido al juego de operaciones matemáticas aleatorias.\n");
    printf("Resuelve las operaciones correctamente para ganar puntos.\n");
    printf("Si fallas, el juego termina y se mostrará tu puntaje.\n\n");

    while (1)
    {
        // Generar números aleatorios de 2 cifras
        num1 = rand() % 90 + 10; // Número entre 10 y 99
        num2 = rand() % 90 + 10; // Número entre 10 y 99

        // Generar operación aleatoria (0: suma, 1: resta, 2: multiplicación)
        operacion = rand() % 3;

        switch (operacion)
        {
        case 0:
            operador = '+';
            resultado = num1 + num2;
            break;
        case 1:
            operador = '-';
            resultado = num1 - num2;
            break;
        case 2:
            operador = '*';
            resultado = num1 * num2;
            break;
        }

        // Mostrar la operación al usuario
        printf("¿Cuánto es %d %c %d? ", num1, operador, num2);
        scanf("%d", &respuesta);

        // Verificar la respuesta
        if (respuesta == resultado)
        {
            printf("¡Correcto!\n");
            puntos++;
        }
        else
        {
            printf("Incorrecto. La respuesta correcta era %d.\n", resultado);
            break;
        }
    }

    // Mostrar el puntaje final
    printf("Juego terminado. Puntos obtenidos: %d\n", puntos);

    return 0;
}