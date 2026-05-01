#include <stdio.h>

int main()
{
  int edad = 25;
  float precio = 10.5;
  char letra = 'A';
  char nombre[] = "Carlos";

  printf("Hola, mi nombre es %s.\n", nombre);
  printf("Tengo %d años.\n", edad);
  printf("El precio es $%.2f\n", precio);
  printf("La primera letra del abecedario es %c.\n", letra);

  return 0;
}
