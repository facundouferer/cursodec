#include <stdio.h>

int main()
{
  int i = 9;

  do
  {
    if (i % 2 != 0)
    {
      printf("%d", i);
    }
    i--;
  } while (i > 0);

  return 0;
}
