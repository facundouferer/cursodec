/**Escribí un programa en C que lea números enteros y los sume hasta que el total acumulado sea par y mayor a 20.
Imprimí "OK" si el total aún no cumple ambas condiciones. */
#include <stdio.h>

int main()
{
  int n, suma = 0;
  while (scanf("%d", &n))
  {
    suma += n;
    if (suma % 2 || suma <= 20)
      puts("OK");
    else
      break;
  }
  return 0;
}
