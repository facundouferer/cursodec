#include <stdio.h>
#include "operaciones.h"



void resta()
{
    float a, b;
    printf("Ingrese el primer número: ");
    scanf("%f", &a);
    printf("Ingrese el segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a - b);
}

void division()
{
    float a, b;
    printf("Ingrese el numerador: ");
    scanf("%f", &a);
    printf("Ingrese el denominador: ");
    scanf("%f", &b);
    if (b != 0)
    {
        printf("Resultado: %.2f\n", a / b);
    }
    else
    {
        printf("Error: División por cero\n");
    }
}

void potencia()
{
    double base, exponente, resultado = 1;
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");

    scanf("%lf", &exponente);
    for (int i = 0; i < (int)exponente; i++)
        resultado *= base;
    printf("Resultado: %.2lf\n", resultado);
}

void factorial()
{
    int n;
    long factorial = 1;
    printf("Ingrese un número entero no negativo: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Resultado: %ld\n", factorial);
}

void tablaDeMultiplicar()
{
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("Tabla de multiplicar del %d:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void suma()
{
    char seguir = 'n';
    float suma = 0, num;
    do
    {
        printf("Ingrese el número: ");
        scanf("%f", &num);
        suma += num;
        printf("desea seguir? si(s) no(n): ");
        while (getchar() != '\n')
            ; // limpia el bufer antes de leer
        scanf("%c", &seguir);

    } while (seguir == 's');

    printf("Resultado: %.2f\n", suma);
}

void multiplicacion()
{
    char seguir = 'n';
    float producto = 1, num;
    do
    {
        printf("Ingrese el número: ");
        scanf("%f", &num);
        producto *= num;
        printf("desea seguir? si(s) no(n): ");
        while (getchar() != '\n')
            ; // limpia el chache antes de leer
        scanf("%c", &seguir);
    } while (seguir == 's');

    printf("Resultado: %.2f\n", producto);
}

