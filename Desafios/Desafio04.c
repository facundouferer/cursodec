/** Crear un programa que permita ingresar los resultados de partidos de fútbol. Se ingresa primero el de local y visitante. El programa debe permitir ingresar la cantidad de datos que sean necesarios y determinar cuál es la probabilidad de que gane el visitante respecto del local.
Ingresaste 20 partidos:
12 victorias locales.
5 victorias visitantes.
3 empates.
Entonces:
P(Local) = 12/20=60%
P(Local)=12/20=60%.
P(Visitante)=5/20=25%
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int visitante, local, cantPartidos = 0;
    float probLocal, probVisitante, probEmpate;
    while (local == -1 || visitante == -1)
    {
        printf("Ingrese el resultado del partido (local): ");
        scanf("%d", &local);
        printf("Ingrese el resultado del partido (visitante): ");
        scanf("%d", &visitante);
        if (local == -1 || visitante == -1)
        {
            break;
        }
        if (local > visitante)
        {
            cantPartidos++;
            probLocal++;
        }
        else if (local < visitante)
        {
            cantPartidos++;
            probVisitante++;
        }
        else
        {
            cantPartidos++;
            probEmpate++;
        }
    }
    // resultados
    printf("Resultados:\n");
    printf("Visitante: %d", visitante);
    printf("Local: %d", local);
    printf("Empates: %d", probEmpate);
    printf("Cantidad de partidos: %d", cantPartidos);
    printf("Probabilidad de local: %.2f%%\n", (probLocal / cantPartidos) * 100);
    printf("Probabilidad de visitante: %.2f%%\n", (probVisitante / cantPartidos) * 100);
    printf("Probabilidad de empate: %.2f%%\n", (probEmpate / cantPartidos) * 100);
    return 0;
}