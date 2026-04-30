#include <stdio.h>
#include "menu.h"

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