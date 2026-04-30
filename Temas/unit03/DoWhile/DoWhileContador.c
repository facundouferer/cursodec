#include <stdio.h>

int main()
{
  int i = 1;

  printf("Do-While \n");
  do
  {
    printf("%d, ", i);
    i++; // Incrementamos la variable i
  } while (i <= 5); // Repite hasta que i sea mayor que 5

  // en compraración con un While
  i = 1;
  printf("\nWhile \n");
  while (i <= 5)
  {
    printf("%d, ", i);
    i++;
  }

  return 0;
}
