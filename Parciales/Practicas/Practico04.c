/**
 Escribe un programa en C que solicite al usuario los siguientes datos:
La inicial de su nombre (un carácter).
Su edad (un número entero).
Su altura en metros (un número decimal, por ejemplo 1.75).
El programa debe leer cada dato usando scanf() y luego mostrar un mensaje
en pantalla que resuma toda la información ingresada, con un formato claro y en líneas separadas.
*/

#include <stdio.h>

int main()
{
  char inicial;
  int edad;
  float altura;

  // Entrada de datos
  printf("Ingrese la inicial de su nombre: ");
  scanf(" %c", &inicial);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("Ingrese su altura en metros: ");
  scanf("%f", &altura);

  // Salida de datos
  printf("\nDatos ingresados:\n");
  printf("Inicial: %c\n", inicial);
  printf("Edad: %d años\n", edad);
  printf("Altura: %f metros\n", altura);

  return 0;
}