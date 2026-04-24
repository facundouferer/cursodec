/**
 * Reto: Contador de Notas de Examen
El objetivo es procesar las notas de un grupo de alumnos para obtener estadísticas básicas.
1. Validación de Inicio
El programa debe pedir un PIN de seguridad (ejemplo: 99) para comenzar. Si el usuario se equivoca, debe insistir hasta que el PIN sea el correcto.
2. Carga de Notas
Una vez dentro, el programa preguntará: "¿Desea ingresar una nota? (1=Sí / 0=No)".
Mientras el usuario elija 1, se pedirá una nota (del 1 al 10).
Si la nota es menor a 4, el programa debe mostrar el mensaje "Reprobado". De lo contrario, mostrará "Aprobado".
El programa debe contar cuántas notas se ingresaron en total y sumarlas.
3. Cierre y Promedio
Cuando el usuario decida no ingresar más notas (presionando 0):
El programa debe mostrar el Promedio Final (Suma de notas / Cantidad de notas).
Para finalizar, el programa debe imprimir una fila de 10 puntos (.) seguidos como un separador decorativo.
 */

#include <stdio.h>
#include <math.h>
int main()
{

  int pin;
  printf("Ingrese el PIN de seguridad para comenzar: ");
  scanf("%d", &pin);

  while (pin != 99)
  {
    printf("PIN incorrecto. Intente nuevamente: ");
    scanf("%d", &pin);
  }

  printf("PIN correcto. Bienvenido al programa de notas.\n");
  int nota, cantidadNotas = 0;
  float sumaNotas = 0.0;
  int ingresarNota;

  do
  {
    printf("¿Desea ingresar una nota? (1=Sí / 0=No): ");
    scanf("%d", &ingresarNota);
    if (ingresarNota == 1)
    {
      printf("Ingrese la nota (1-10): ");
      scanf("%d", &nota);
      if (nota < 4)
      {
        printf("Reprobado\n");
      }
      else
      {
        printf("Aprobado\n");
      }
      sumaNotas += nota;
      cantidadNotas++;
    }
  } while (ingresarNota == 1);
  if (cantidadNotas > 0)
  {
    float promedio = sumaNotas / cantidadNotas;
    printf("Promedio: %.2f\n", promedio);
  }
  else
  {
    printf("No se ingresaron notas.\n");
  }

  return 0;
}