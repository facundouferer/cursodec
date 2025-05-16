#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int operar(int a, int b){
    int operacion;
    printf("Ingrese la operación a realizar: ");
    scanf("%d", &operacion);
    if(operacion == 1){
        return sumar(a,b); 
    }
    if(operacion == 2){
        return resta(a,b); 
    }
    if(operacion == 3){
        return multiplicar(a,b); 
    }
    return 0;
}

int main() {
    int a, b;
    printf("Ingrese nro: ");
    scanf("%d", &a);
    printf("Ingrese nro: ");
    scanf("%d", &b);
    int resultado = operar(a, b);
    printf("El resultado es: %d\n", resultado);
    return 0;
}

