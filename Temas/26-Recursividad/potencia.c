#include <stdio.h>

int potencia(int num)
{
  if (num < 1)
  {
    return 1; // devuelve 1 ya q todo num elevado a la potencia d 0 es 1
  }
  else
  {
    return num * potencia(num - 1); // multiplica el num - 1 x si mismo hasta llegar a 1
  }
}

int main()
{
  printf("%d", potencia(3));
  return 0;
}