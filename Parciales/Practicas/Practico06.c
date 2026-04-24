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

/**
 * Desarrollá un programa en C que simule el funcionamiento de un cajero automático simple.

El programa debe comenzar con los siguientes datos cargados:

* Un saldo inicial de la cuenta (tipo `float`)
* Un PIN de acceso de 4 dígitos (tipo `int`)
* Una variable para contar intentos fallidos
* Una variable para la opción elegida en el menú

## Primera parte: Validación de acceso

1. El programa debe pedir al usuario que ingrese el PIN.
2. Tendrá un máximo de **3 intentos** para acertarlo.
3. Mientras el PIN sea incorrecto y queden intentos disponibles, debe seguir pidiéndolo usando `while`.
4. Si falla los 3 intentos, mostrar:

```text
Tarjeta bloqueada
```

y finalizar el programa.

5. Si el PIN es correcto, mostrar:

```text
Acceso concedido
```

---

## Segunda parte: Menú principal

Una vez dentro del sistema, mostrar repetidamente el siguiente menú hasta que el usuario elija salir:

```text
1 - Consultar saldo
2 - Depositar dinero
3 - Extraer dinero
4 - Cambiar PIN
5 - Salir
```

La opción debe resolverse con `switch`.

---

## Reglas de cada opción

### Opción 1: Consultar saldo

Mostrar el saldo actual.

---

### Opción 2: Depositar dinero

Pedir un monto a depositar.

* Si el monto es mayor a 0, sumarlo al saldo.
* Si no, mostrar:

```text
Monto inválido
```

---

### Opción 3: Extraer dinero

Pedir monto a extraer.

* Si el monto es mayor a 0:

  * Si el monto es menor o igual al saldo, descontarlo.
  * Si no alcanza el saldo, mostrar:

```text
Fondos insuficientes
```

(Este punto debe resolverse con **if anidado**).

* Si el monto es menor o igual a 0, informar error.

---

### Opción 4: Cambiar PIN

Pedir PIN actual.

* Si coincide:

  * Pedir nuevo PIN.
  * Si el nuevo PIN tiene exactamente 4 cifras (entre 1000 y 9999), actualizarlo.
  * Si no, informar error.
* Si no coincide, mostrar:

```text
PIN incorrecto
```

---

### Opción 5: Salir

Mostrar:

```text
Gracias por utilizar el cajero
```

y terminar.

## Validaciones generales

* Si el usuario ingresa una opción inválida del menú, informar error.
* Usar variables de tipo `int`, `float` y `char` si lo considerás necesario.
* No usar arreglos, cadenas, funciones avanzadas ni estructuras.
 */