#include <stdio.h>

void contador(int numero)
{

  printf(" - %d", numero);
  if (numero < 1)
  {
    return;
  }
  else
  {
    contador(numero - 1);
  }
}

int main()
{
  contador(5); // Comenzamos desde 5
  return 0;
}
