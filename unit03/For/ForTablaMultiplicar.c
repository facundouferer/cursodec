#include <stdio.h>

int main()
{
  int numero;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  for (int i = 1; i <= 10; i++)
  {
    int producto = numero * i;
    printf("%d x %d = %d\n", numero, i, producto);
  }

  return 0;
}