#include <stdio.h>

int main()
{
  printf("Numero a Multiplicar: ");
  int numero;
  scanf("%d", &numero);

  printf("Límite Inferior: ");
  int limiteInferior;
  scanf("%d", &limiteInferior);

  printf("Límite Superior: ");
  int limiteSuperior;
  scanf("%d", &limiteSuperior);

  for (int i = limiteInferior; i <= limiteSuperior; i++)
  {
    int resultado = numero * i;
    printf("%d x %d = %d\n", numero, i, resultado);
  }

  return 0;
}
