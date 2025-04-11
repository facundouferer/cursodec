#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hola";
    char b[] = "hola";
    char c[] = "mundo";

    if (strcmp(a, b) == 0) {
        printf("a y b son iguales\n");
    }

    if (strcmp(a, c) != 0) {
        printf("a y c son diferentes\n");
    }

    return 0;
}