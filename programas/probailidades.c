#include <stdio.h>
#include <math.h>
int main()
{
  int cara = 0, seca = 0, resulado, totalTiradas;
  float frecuenciaRelativaCara, frecuenciaRelativaSeca;

  printf("Ingrese el número de tiradas: ");
  scanf("%d", &totalTiradas);
  int desContador = totalTiradas;

  while (desContador > 0)
  {
    printf("Ingrese el resultado: ");
    scanf("%d", &resulado);

    if (resulado >= 1 && resulado <= 2)
    {
      if (resulado == 1)
      {
        cara++;
      }
      else
      {
        seca++;
      }
    }
    desContador--;
  }

  frecuenciaRelativaCara = (float)cara / totalTiradas;
  frecuenciaRelativaSeca = (float)seca / totalTiradas;

  printf("Frecuencia relativa de cara: %.2f%%\n", frecuenciaRelativaCara * 100);
  printf("Frecuencia relativa de seca: %.2f%%\n", frecuenciaRelativaSeca * 100);

  return 0;
}