// funciones.c
// Implementación de funciones
#include "funciones.h"

int esPar(int n) {
    return n % 2 == 0;
}

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

float promedio(int a, int b) {
    return (a + b) / 2.0;
}
