#include <stdio.h>

#define PI 3.1416 // Definimos una constante con #define

int main()
{
  const float GRAVEDAD = 9.81; // Definimos una constante con const
  float radio = 5.0;

  // Calculamos el área de un círculo con PI
  float area = PI * radio * radio;

  printf("Radio: %.2f\n", radio);
  printf("Área del círculo: %.2f\n", area);
  printf("Valor de la gravedad: %.2f m/s^2\n", GRAVEDAD);

  // GRAVEDAD = 10; ❌ Esto daría error porque es una constante
  return 0;
}
