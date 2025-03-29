#include <stdio.h>

int main()
{

  int A, B, C;
  printf("A: ");
  scanf("%d", &A);
  printf("B: ");
  scanf("%d", &B);
  printf("C: ");
  scanf("%d", &C);

  if (A > B)
  {
    if (B > C)
    {
      printf("%d, %d, %d\n", A, B, C);
    }
    else
    {
      if (A > C)
      {
        printf("%d, %d, %d\n", A, C, B);
      }
      else
      {
        printf("%d, %d, %d\n", C, A, B);
      }
    }
  }
  else
  {
    if (A > C)
    {
      printf("%d, %d, %d\n", B, A, C);
    }
    else
    {
      if (B > C)
      {
        printf("%d, %d, %d\n", B, C, A);
      }
      else
      {
        printf("%d, %d, %d\n", C, B, A);
      }
    }
  }

  return 0;
}