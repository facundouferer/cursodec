#include <stdio.h>
//Factorial de un número
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int num = 4;
    printf("El factorial de %d es %d\n", num, factorial(num));
    return 0;
}
