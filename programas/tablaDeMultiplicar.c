#include <stdio.h>

int main()
{
  int tabla;
  printf("Ingrese la tabla a multiplicar: ");
  scanf("%d", &tabla);

  for (int j = 1; j <= 9; j++)
  {
    int total = tabla * j;
    printf("%d x %d = %d\n", tabla, j, total);
  }

  return 0;
}