#include <stdio.h>
#include "operaciones.h"
#include "menu.h"

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