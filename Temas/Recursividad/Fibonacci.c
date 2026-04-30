#include <stdio.h>
//Serie de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0; // Caso base
    if (n == 1) return 1; // Caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursión
}

int main() {
    int i;
    for (i = 0; i < 8; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
