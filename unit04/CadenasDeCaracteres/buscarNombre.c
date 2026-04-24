#include <stdio.h>
#include <string.h>

int main()
{
  char frase[] = "carlos, pepe, maría, josefina, ignacio";
  print("Ingrese un nombre para buscar: ");

  char nombre[20];
  scanf("%s", nombre);

  char *ptr = strstr(frase, nombre);

  if (ptr != NULL)
  {
    printf("Se encontró a: %s\n", ptr);
  }
  else
  {
    printf("Nombre no encontrado\n");
  }

  return 0;
}