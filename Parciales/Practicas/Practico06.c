#include <stdio.h>

int main()
{
  int pinCorrecto = 1234;
  int pinIngresado;
  int intentos = 0;
  int opcion = 0;

  float saldo = 15000.0;
  float monto;

  int nuevoPin;
  int pinActual;

  /* VALIDACION DE ACCESO */
  while (intentos < 3)
  {
    printf("Ingrese PIN: ");
    scanf("%d", &pinIngresado);
    if (pinIngresado == pinCorrecto)
    {
      printf("Acceso concedido\n");
      break;
    }
    else
    {
      intentos++;
      printf("PIN incorrecto\n");
    }
  }

  if (intentos == 3)
  {
    printf("Tarjeta bloqueada\n");
    return 0;
  }

  /* MENU PRINCIPAL */
  while (opcion != 5)
  {
    printf("\n----- CAJERO AUTOMATICO -----\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar dinero\n");
    printf("3 - Extraer dinero\n");
    printf("4 - Cambiar PIN\n");
    printf("5 - Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {

    case 1:
      printf("Saldo actual: %.2f\n", saldo);
      break;

    case 2:
      printf("Ingrese monto a depositar: ");
      scanf("%f", &monto);

      if (monto > 0)
      {
        saldo = saldo + monto;
        printf("Deposito realizado con exito.\n");
      }
      else
      {
        printf("Monto invalido\n");
      }
      break;

    case 3:
      printf("Ingrese monto a extraer: ");
      scanf("%f", &monto);

      if (monto > 0)
      {

        if (monto <= saldo)
        {
          saldo = saldo - monto;
          printf("Extraccion realizada con exito.\n");
        }
        else
        {
          printf("Fondos insuficientes\n");
        }
      }
      else
      {
        printf("Monto invalido\n");
      }
      break;

    case 4:
      printf("Ingrese PIN actual: ");
      scanf("%d", &pinActual);

      if (pinActual == pinCorrecto)
      {

        printf("Ingrese nuevo PIN de 4 cifras: ");
        scanf("%d", &nuevoPin);

        if (nuevoPin >= 1000 && nuevoPin <= 9999)
        {
          pinCorrecto = nuevoPin;
          printf("PIN cambiado correctamente.\n");
        }
        else
        {
          printf("PIN invalido\n");
        }
      }
      else
      {
        printf("PIN incorrecto\n");
      }
      break;

    case 5:
      printf("Gracias por utilizar el cajero\n");
      break;

    default:
      printf("Opcion invalida\n");
    }
  }

  return 0;
}