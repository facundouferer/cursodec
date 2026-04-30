#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Programar";
    int longitud = strlen(texto);

    printf("Longitud de '%s': %d\n", texto, longitud);
    return 0;
}