#include <stdio.h>
#include <math.h>
int main()
{

  int diasTrabajados, horasDiarias, limiteHsExtra;
  float horaComun, horaExtra;
  float total = 0;

  printf("Ingrese el valor de la hora común: ");
  scanf("%f", &horaComun);
  printf("Ingrese el valor de la hora extra: ");
  scanf("%f", &horaExtra);
  printf("Ingrese días trabajados: ");
  scanf("%d", &diasTrabajados);

  printf("Ingrese el límite de horas extra: ");
  scanf("%d", &limiteHsExtra);

  for (int i = 0; i < diasTrabajados; i++)
  {
    printf("Ingrese horas trabajadas en el día %d: ", i + 1);
    scanf("%d", &horasDiarias);
    if (horasDiarias <= limiteHsExtra)
    {
      total += horaComun * horasDiarias;
    }
    else
    {
      total += horaExtra * (horasDiarias - limiteHsExtra) + (horaComun * limiteHsExtra);
    }
  }

  printf("El total a pagar es: %.2f\n", total);

  return 0;
}