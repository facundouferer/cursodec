#include <stdio.h>

int main(void)
{
  int i = 9;

  do
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
    i--;
  } while (i > 0);

  return 0;
}
