#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;
  int c = -3;

  if (a || b > 0 && c > 0)
  {
    printf("Condición verdadera\n");
  }
  else
  {
    printf("Condición falsa\n");
  }

  return 0;
}
