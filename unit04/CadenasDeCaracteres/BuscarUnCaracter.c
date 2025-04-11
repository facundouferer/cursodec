#include <stdio.h>
#include <string.h>

int main() {
    char palabra[] = "computadora";
    char *ptr = strchr(palabra, 'u');

    if (ptr != NULL) {
        printf("Encontrado: %c en la posición %ld\n", *ptr, ptr - palabra);
    } else {
        printf("No se encontró el carácter\n");
    }

    return 0;
}