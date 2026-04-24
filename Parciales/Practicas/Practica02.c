#include <stdio.h>
#include <unistd.h> // Para sleep()

int main()
{
  int i = 3;
  printf("i-- es %d\n", i--);
  printf("i es %d\n", i);
  printf("--i es %d\n", --i);

  return 0;
}