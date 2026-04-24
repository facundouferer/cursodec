#include <stdio.h>

int main(void)
{
  const int ruedas;
  float precio;
  char inicialMarca;
  int anioFabricacion;

  printf("Ingrese la cantidad de ruedas: ");
  scanf("%d", &ruedas);

  printf("Ingrese el precio de la bicicleta: ");
  scanf("%f", &precio);

  printf("Ingrese la letra inicial de la marca: ");
  scanf(" %c", &inicialMarca);

  printf("Ingrese el año de fabricación: ");
  scanf("%d", &anioFabricacion);

  printf("Cantidad de ruedas: %d\n", ruedas);
  printf("Precio: $%.2f\n", precio);
  printf("Inicial de la marca: %c\n", inicialMarca);
  printf("Año de fabricación: %d\n", anioFabricacion);

  return 0;
}

/**
Registro básico de una bicicleta

El programa debe almacenar:

la cantidad de ruedas (dato fijo que no cambia)
el precio de la bicicleta
la letra inicial de la marca
el año de fabricación
Requisitos
La cantidad de ruedas debe guardarse como constante.
El precio debe guardarse en una variable de tipo float.
La inicial de la marca debe guardarse en una variable de tipo char.
El año de fabricación debe guardarse en una variable de tipo int.
Asigná valores válidos a cada dato al momento de declarar las variables.
 */
