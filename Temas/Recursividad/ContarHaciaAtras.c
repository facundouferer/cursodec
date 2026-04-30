#include <stdio.h>
//Contar hacia atrás
void contarAtras(int n) {
    if (n == 0) {
        printf("¡Listo!\n"); // Caso base
    } else {
        printf("%d\n", n);          // Mostrar el número actual
        contarAtras(n - 1);         // Llamada recursiva
    }
}

int main() {
    contarAtras(5);  // Comenzamos desde 5
    return 0;
}
