#include <stdio.h>

void mostrarMenu()
{
    printf("Seleccione una operación:\n");
    printf("Ingreso de 2 números:\n");
    printf("\t1. Resta\n");
    printf("\t2. División\n");
    printf("\t3. Potencia\n");
    printf("Ingreso de 1 número:\n");
    printf("\t4. Factorial\n");
    printf("\t5. Tabla de multiplicación del 1 al 10\n");
    printf("Ingreso de n números:\n");
    printf("\t6. Suma\n");
    printf("\t7. Multiplicación\n");
    printf("Ingrese el número de la operación que desea realizar: ");
}

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
    printf("Resultado: %llu\n", factorial);
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

void realizarOperaciones()
{
    int operacion;
    scanf("%d", &operacion);
    switch (operacion)
    {
    case 1:
    {
        resta();
        break;
    }
    case 2:
    {
        division();
        break;
    }
    case 3:
    {
        potencia();
        break;
    }
    case 4:
    {
        factorial();
        break;
    }
    case 5:
    {
        tablaDeMultiplicar();
        break;
    }
    case 6:
    {
        suma();
        break;
    }
    case 7:
    {
        multiplicacion();
        break;
    }
   
    default:
        printf("Opción incorrecta\n");
        break;
    }
}

int main()
{
    char seguir = 'n';
    do
    {
        mostrarMenu();
        realizarOperaciones();
        printf("SEGUIR? SI NO: ");
        while (getchar() != '\n')
            ; 
        scanf("%c", &seguir);
    } while (seguir == 's');
 printf("Chau");
    return 0;
}