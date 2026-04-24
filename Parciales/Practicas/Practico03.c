#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;
  int c = -3;

  if (a && b > 0 || c < 0)
  {
    printf("VERDADERO");
  }
  else
  {
    printf("FALSO");
  }

  /**
   a && b > 0 || c < 0
   0 && 5 > 0 || -3 < 0
      0 || 1
        1
   */

  return 0;
}