#include <stdio.h>
int main()
{
  int edad;
  printf("Ingrese su edad: ");
  scanf("%d", &edad);
  if (edad >= 0)
  {
    if (edad < 18)
    {
      printf("Eres menor de edad");
    }
    else
    {
      printf("Eres un adulto");
    }
  }
  else
  {
    printf("La edad ingresada no es válida");
  }
  return 0;
}
