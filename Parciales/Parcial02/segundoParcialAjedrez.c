#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pieza
{
  int posicion[2]; // posicion[0] = fila, posicion[1] = columna
  char tipo[20];   // peon, torre, caballo, alfil, reina, rey
  char color;      // 'b' para blanco, 'n' para negro
  int valor;
  int activa; // 1 si esta en juego, 0 si fue capturada
};

// Prototipos
void ordenarPiezas(struct Pieza piezas[], int cantidad);
struct Pieza buscarPieza(struct Pieza piezas[], int cantidad, int fila, int columna);
void listarPiezasPorValor(struct Pieza piezas[], int cantidad);
void listarPiezasPorPosicion(struct Pieza piezas[], int cantidad);
void listarPiezasActivas(struct Pieza piezas[], int cantidad);
void capturarPieza(struct Pieza piezas[], int cantidad, int fila, int columna);
void restaurarPieza(struct Pieza piezas[], int cantidad, int fila, int columna);
void modificarPieza(struct Pieza piezas[], int cantidad, int fila, int columna);
void mostrarEstadisticas(struct Pieza piezas[], int cantidad);
void agregarPieza(struct Pieza piezas[], int *cantidad, struct Pieza nuevaPieza);
char *seleccionarTipoDePieza(int numeroPieza);
int obtenerValorDePieza(int numeroPieza);
void mostrarMenu();

int main()
{
  struct Pieza piezas[100];
  int cantidad = 0;
  int opcion;

  do
  {
    mostrarMenu();
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    {
      struct Pieza nueva;
      printf("Fila: ");
      scanf("%d", &nueva.posicion[0]);
      printf("Columna: ");
      scanf("%d", &nueva.posicion[1]);

      int numeroPieza;
      printf("Seleccione el tipo de pieza:\n");
      printf("1. Peon\n");
      printf("2. Torre\n");
      printf("3. Caballo\n");
      printf("4. Alfil\n");
      printf("5. Reina\n");
      printf("6. Rey\n");
      printf("Ingrese una opcion: ");
      scanf("%d", &numeroPieza);

      strcpy(nueva.tipo, seleccionarTipoDePieza(numeroPieza));
      printf("Color ('b' blanco, 'n' negro): ");
      scanf(" %c", &nueva.color);
      nueva.valor = obtenerValorDePieza(numeroPieza);
      nueva.activa = 1;
      agregarPieza(piezas, &cantidad, nueva);
      break;
    }
    case 2:
      listarPiezasPorValor(piezas, cantidad);
      break;
    case 3:
    {
      int fila, columna;
      printf("Fila de la pieza a buscar: ");
      scanf("%d", &fila);
      printf("Columna de la pieza a buscar: ");
      scanf("%d", &columna);

      struct Pieza encontrada = buscarPieza(piezas, cantidad, fila, columna);
      if (encontrada.posicion[0] != -1)
      {
        printf("Posicion: (%d,%d), Tipo: %s, Color: %c, Valor: %d\n",
               encontrada.posicion[0], encontrada.posicion[1], encontrada.tipo, encontrada.color, encontrada.valor);
      }
      else
      {
        printf("Pieza no encontrada.\n");
      }
      break;
    }
    case 4:
      listarPiezasPorPosicion(piezas, cantidad);
      break;
    case 5:
      listarPiezasActivas(piezas, cantidad);
      break;
    case 6:
    {
      int fila, columna;
      printf("Fila de la pieza a capturar: ");
      scanf("%d", &fila);
      printf("Columna de la pieza a capturar: ");
      scanf("%d", &columna);
      capturarPieza(piezas, cantidad, fila, columna);
      break;
    }
    case 7:
    {
      int fila, columna;
      printf("Fila de la pieza a restaurar: ");
      scanf("%d", &fila);
      printf("Columna de la pieza a restaurar: ");
      scanf("%d", &columna);
      restaurarPieza(piezas, cantidad, fila, columna);
      break;
    }
    case 8:
    {
      int fila, columna;
      printf("Fila de la pieza a modificar: ");
      scanf("%d", &fila);
      printf("Columna de la pieza a modificar: ");
      scanf("%d", &columna);
      modificarPieza(piezas, cantidad, fila, columna);
      break;
    }
    case 9:
      mostrarEstadisticas(piezas, cantidad);
      break;
    case 10:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opcion invalida.\n");
    }

  } while (opcion != 10);

  return 0;
}

// ordenar piezas con el Metodo de la Burbuja (Bubble Sort)
void ordenarPiezas(struct Pieza piezas[], int cantidad)
{
  struct Pieza aux;
  for (int i = 0; i < cantidad - 1; i++)
  {
    for (int j = 0; j < cantidad - i - 1; j++)
    {
      if (piezas[j].posicion[0] > piezas[j + 1].posicion[0] ||
          (piezas[j].posicion[0] == piezas[j + 1].posicion[0] &&
           piezas[j].posicion[1] > piezas[j + 1].posicion[1]))
      {
        aux = piezas[j];
        piezas[j] = piezas[j + 1];
        piezas[j + 1] = aux;
      }
    }
  }
}

// buscar piezas con el metodo de Busqueda Binaria (Binary Search)
struct Pieza buscarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
  ordenarPiezas(piezas, cantidad);

  int inicio = 0;
  int fin = cantidad - 1;

  while (inicio <= fin)
  {
    int medio = inicio + (fin - inicio) / 2;
    int filaMedio = piezas[medio].posicion[0];
    int columnaMedio = piezas[medio].posicion[1];

    if (filaMedio == fila && columnaMedio == columna)
    {
      return piezas[medio];
    }
    else if (filaMedio < fila || (filaMedio == fila && columnaMedio < columna))
    {
      inicio = medio + 1;
    }
    else
    {
      fin = medio - 1;
    }
  }

  struct Pieza piezaNoEncontrada = {{-1, -1}, "", 'x', 0, 0};
  return piezaNoEncontrada;
}

// listar las piezas de mayor valor
void listarPiezasPorValor(struct Pieza piezas[], int cantidad)
{
  struct Pieza aux;
  for (int i = 0; i < cantidad - 1; i++)
  {
    for (int j = 0; j < cantidad - i - 1; j++)
    {
      if (piezas[j].valor < piezas[j + 1].valor)
      {
        aux = piezas[j];
        piezas[j] = piezas[j + 1];
        piezas[j + 1] = aux;
      }
    }
  }

  printf("Piezas ordenadas por valor (de mayor a menor):\n");
  for (int i = 0; i < cantidad; i++)
  {
    printf("Posicion: (%d,%d), Tipo: %s, Color: %c, Valor: %d\n",
           piezas[i].posicion[0], piezas[i].posicion[1], piezas[i].tipo, piezas[i].color, piezas[i].valor);
  }
}

// listar las piezas ordenadas por posicion
void listarPiezasPorPosicion(struct Pieza piezas[], int cantidad)
{
  ordenarPiezas(piezas, cantidad);

  printf("Piezas ordenadas por posicion:\n");
  for (int i = 0; i < cantidad; i++)
  {
    printf("Posicion: (%d,%d), Tipo: %s, Color: %c, Valor: %d\n",
           piezas[i].posicion[0], piezas[i].posicion[1], piezas[i].tipo, piezas[i].color, piezas[i].valor);
  }
}

// listar solo las piezas activas
void listarPiezasActivas(struct Pieza piezas[], int cantidad)
{
  printf("Piezas activas en el tablero:\n");
  int encontradas = 0;
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].activa == 1)
    {
      printf("Posicion: (%d,%d), Tipo: %s, Color: %c, Valor: %d\n",
             piezas[i].posicion[0], piezas[i].posicion[1], piezas[i].tipo, piezas[i].color, piezas[i].valor);
      encontradas++;
    }
  }
  if (encontradas == 0)
  {
    printf("No hay piezas activas.\n");
  }
}

// capturar una pieza por posicion
void capturarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].posicion[0] == fila && piezas[i].posicion[1] == columna)
    {
      piezas[i].activa = 0;
      printf("Pieza en posicion (%d,%d) capturada.\n", fila, columna);
      return;
    }
  }
  printf("Pieza en posicion (%d,%d) no encontrada.\n", fila, columna);
}

// restaurar una pieza por posicion
void restaurarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].posicion[0] == fila && piezas[i].posicion[1] == columna)
    {
      piezas[i].activa = 1;
      printf("Pieza en posicion (%d,%d) restaurada.\n", fila, columna);
      return;
    }
  }
  printf("Pieza en posicion (%d,%d) no encontrada.\n", fila, columna);
}

// modificar tipo, color o valor de una pieza por posicion
void modificarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].posicion[0] == fila && piezas[i].posicion[1] == columna)
    {
      printf("Pieza encontrada: %s de color %c\n", piezas[i].tipo, piezas[i].color);

      int numeroPieza;
      printf("Seleccione el nuevo tipo de pieza:\n");
      printf("1. Peon\n");
      printf("2. Torre\n");
      printf("3. Caballo\n");
      printf("4. Alfil\n");
      printf("5. Reina\n");
      printf("6. Rey\n");
      printf("Ingrese una opcion: ");
      scanf("%d", &numeroPieza);

      strcpy(piezas[i].tipo, seleccionarTipoDePieza(numeroPieza));
      printf("Nuevo color ('b' blanco, 'n' negro): ");
      scanf(" %c", &piezas[i].color);
      piezas[i].valor = obtenerValorDePieza(numeroPieza);
      printf("Pieza modificada.\n");
      return;
    }
  }
  printf("Pieza en posicion (%d,%d) no encontrada.\n", fila, columna);
}

// mostrar cantidad de piezas activas y capturadas
void mostrarEstadisticas(struct Pieza piezas[], int cantidad)
{
  int activas = 0;
  int capturadas = 0;
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].activa == 1)
      activas++;
    else
      capturadas++;
  }
  printf("Total de piezas: %d\n", cantidad);
  printf("Activas: %d\n", activas);
  printf("Capturadas: %d\n", capturadas);
}

void agregarPieza(struct Pieza piezas[], int *cantidad, struct Pieza nuevaPieza)
{
  if (*cantidad < 100)
  {
    piezas[*cantidad] = nuevaPieza;
    (*cantidad)++;
    printf("Pieza agregada: Posicion (%d,%d), Tipo: %s, Color: %c\n",
           nuevaPieza.posicion[0], nuevaPieza.posicion[1], nuevaPieza.tipo, nuevaPieza.color);
  }
  else
  {
    printf("No se pueden agregar mas piezas. Capacidad maxima alcanzada.\n");
  }
}

char *seleccionarTipoDePieza(int numeroPieza)
{
  switch (numeroPieza)
  {
  case 1:
    return "peon";
  case 2:
    return "torre";
  case 3:
    return "caballo";
  case 4:
    return "alfil";
  case 5:
    return "reina";
  case 6:
    return "rey";
  default:
    return "desconocida";
  }
}

int obtenerValorDePieza(int numeroPieza)
{
  switch (numeroPieza)
  {
  case 1:
    return 1;
  case 2:
    return 5;
  case 3:
    return 3;
  case 4:
    return 3;
  case 5:
    return 9;
  case 6:
    return 100;
  default:
    return 0;
  }
}

void mostrarMenu()
{
  printf("\nMenu de opciones:\n");
  printf("1. Agregar pieza\n");
  printf("2. Listar piezas por valor\n");
  printf("3. Buscar pieza por posicion\n");
  printf("4. Listar piezas por posicion\n");
  printf("5. Mostrar piezas activas\n");
  printf("6. Capturar pieza\n");
  printf("7. Restaurar pieza\n");
  printf("8. Modificar pieza\n");
  printf("9. Mostrar estadisticas (activas/capturadas)\n");
  printf("10. Salir\n");
}