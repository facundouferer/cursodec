#include <stdio.h>

int main()
{
  int num;

  printf("Ingrese un número (negativo para salir):");
  scanf("%d", &num);
  while (num >= 0)
  {
    if (num % 2 == 0)
    {
      printf("Es par\n");
    }
    else
    {
      printf("Es impar\n");
    }

    printf("Ingrese un número (negativo para salir):");
    scanf("%d", &num);
  }
  return 0;
}