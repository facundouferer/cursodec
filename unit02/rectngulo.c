#include <stdio.h>

int main()
{
  float base, altura, area;
  printf("Ingrese la base del rectángulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura del rectángulo: ");
  scanf("%f", &altura);
  area = base * altura;
  printf("El área del rectángulo es: %.2f\n", area);
  return 0;
}