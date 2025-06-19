#include "operaciones.h"

int esPar(int n) {
    return n % 2 == 0;
}

int maximo(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

float promedio(int a, int b, int c) {
    return (a + b + c) / 3.0;
}
