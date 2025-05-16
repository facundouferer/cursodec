#include <stdio.h>

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float b, h;
    printf("Ingrese la base y la altura del triangulo: ");
    scanf("%f %f", &b, &h);

    float area = areaTriangulo(b, h);
    printf("El area es: %.2f\n", area);

    return 0;
}
