#include <stdio.h>

int main()
{
  int caras = 0, secas = 0, tiro = 0;
  float frecuenciaRelativaCaras, frecuenciaRelativaSecas;

  printf("¿Cuántas veces se lanzó la moneda? ");
  scanf("%d", &tiro);

  for (int i = 0; i < tiro; i++)
  {
    int resultado;
    printf("0 para cara, 1 para seca: ");
    scanf("%d", &resultado);

    if (resultado == 0)
      caras++;
    else
    {
      secas++;
    }
  }

  frecuenciaRelativaCaras = ((float)caras / tiro) * 100;
  frecuenciaRelativaSecas = ((float)secas / tiro) * 100;

  printf("Frecuencia relativa de caras: %.2f\n", frecuenciaRelativaCaras);
  printf("Frecuencia relativa de secas: %.2f\n", frecuenciaRelativaSecas);

  return 0;
}