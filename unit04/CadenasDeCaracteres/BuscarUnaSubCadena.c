#include <stdio.h>
#include <string.h>

int main() {
    char frase[] = "Me gusta programar en C";
    char *ptr = strstr(frase, "programar");

    if (ptr != NULL) {
        printf("Subcadena encontrada: %s\n", ptr);
    } else {
        printf("Subcadena no encontrada\n");
    }

    return 0;
}