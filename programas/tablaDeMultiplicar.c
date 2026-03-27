#include <stdio.h>

int main()
{

  for (int i = 1; i <= 9; i++)
  {
    printf("Tabla de multiplicar del %d:\n", i);
    for (int j = 1; j <= 9; j++)
    {
      int total = i * j;
      printf("%d x %d = %d\n", i, j, total);
    }
  }
  return 0;
}