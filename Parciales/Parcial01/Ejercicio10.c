#include <stdio.h>

int main()
{
  int i = 0;
  while (i < 3)
  {
    int j = 0;
    while (j < 5)
    {
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}