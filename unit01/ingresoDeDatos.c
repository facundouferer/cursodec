#include <stdio.h>

int main()
{
  char nombre[50];

  printf("Ingrese su nombre: ");
  scanf("%s", &nombre);

  printf("Hola %s, bienvenido al curso de programación en C!\n", nombre);

  return 0;
}