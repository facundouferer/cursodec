#include <stdio.h>

int main()
{
  // Declaración de variables
  int edad = 25;        // Variable de tipo entero
  float precio = 15.99; // Variable de tipo flotante
  char letra = 'A';     // Variable de tipo carácter

  // Mostramos los valores de las variables
  printf("Edad: %d años\n", edad);
  printf("Precio: $%.2f\n", precio);
  printf("Letra: %c\n", letra);

  // Modificamos la variable edad
  edad = 30;
  printf("Nueva edad: %d años\n", edad);

  return 0;
}
