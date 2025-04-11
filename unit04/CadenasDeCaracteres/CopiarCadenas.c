#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola";
    char destino[20];

    strcpy(destino, origen); // Copiamos "Hola" a destino

    printf("Destino: %s\n", destino);
    return 0;
}