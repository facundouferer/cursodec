#include <stdio.h>
#include <string.h>

int main() {
    char saludo[20] = "Hola ";
    char nombre[] = "Juan";

    strcat(saludo, nombre);

    printf("Saludo completo: %s\n", saludo);
    return 0;
}