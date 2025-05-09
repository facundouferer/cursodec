/*Escribí un programa en C que lea números enteros desde el teclado hasta que se ingrese un número múltiplo de 7 y mayor que 50.
El programa debe imprimir “OK” cada vez que el número no cumpla ambas condiciones, y detenerse cuando se ingresa uno que sí las cumple.*/

#include <stdio.h>

int main()
{
  int n;
  while (scanf("%d", &n))
    if (n % 7 || n <= 50)
      puts("OK");
    else
      break;

  return 0;
}
