#include <stdio.h>

int main()
{
  int dia = 3;

  switch (dia)
  {
  case 1:
    printf("Lunes");
    break;
  case 2:
    printf("Martes");
    break;
  case 3:
    printf("Miércoles");
    break;
  case 4:
    printf("Jueves");
    break;
  default:
    printf("Día inválido");
  }

  return 0;
}