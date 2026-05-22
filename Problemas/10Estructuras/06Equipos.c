#include <stdio.h>
// nombre, ciudad, cantLibertadores

#define MAX_TEXTO 50
#define CANT_EQUIPOS 100
#define CANT_JUGADORES 100

struct Jugador
{
  char nombre[MAX_TEXTO];
  int posicion;
  int estado; // 1: titular, 0: suplente
};

struct Equipo
{
  char nombre[MAX_TEXTO];
  char ciudad[MAX_TEXTO];
  struct Jugador jugadores[CANT_JUGADORES];
  int cantLibertadores;
  int cantJugadores;
};

void listarEquipos(struct Equipo equipos[], int cantidad)
{
  printf("Listado de Equipos:\n");
  for (int i = 0; i < cantidad; i++)
  {
    printf("Equipo: %sCiudad: %sCantidad de Libertadores: %d\n", equipos[i].nombre, equipos[i].ciudad, equipos[i].cantLibertadores);
    printf("Jugadores:\n");
    for (int j = 0; j < equipos[i].cantJugadores; j++)
    {
      if (equipos[i].jugadores[j].estado == 1)
      {
        printf("%d) %s(Titular) \n", equipos[i].jugadores[j].posicion, equipos[i].jugadores[j].nombre);
      }
      else
      {
        printf("%d) %s (Suplente)\n", equipos[i].jugadores[j].posicion, equipos[i].jugadores[j].nombre);
      }
    }
  }
}

void cargarEquipo(struct Equipo equipos[], int i)
{
  printf("Equipo: ");
  fgets(equipos[i].nombre, MAX_TEXTO, stdin);
  printf("Ingrese la ciudad del equipo %d: ", i + 1);
  fgets(equipos[i].ciudad, MAX_TEXTO, stdin);
  printf("Libertadores ganadas: ");
  scanf(" %d", &equipos[i].cantLibertadores);
  equipos[i].cantJugadores = 0;
  getchar(); // Limpiar el buffer
}

void cargarJugador(struct Equipo equipos[], int cantJugadores, int i)
{
  int j = equipos[i].cantJugadores;
  printf("Ingrese datos del jugador");
  printf("%d) Nombre: ", i + 1);
  fgets(equipos[i].jugadores[j].nombre, MAX_TEXTO, stdin);
  printf("Posición: ");
  scanf(" %d", &equipos[i].jugadores[j].posicion);
  printf("Estado (1: titular, 0: suplente): ");
  scanf(" %d", &equipos[i].jugadores[j].estado);
  equipos[i].cantJugadores++;
  getchar(); // Limpiar el buffer
}

int main()
{

  struct Equipo equipos[CANT_EQUIPOS];

  int opcion = 0;
  int equiposCargados = 0;
  do
  {
    printf("\n=== MENÚ ===\n");
    printf("1. Cargar Equipo\n");
    printf("2. Cargar jugador\n");
    printf("3. Listar Equipos\n");
    printf("0. Salir\n");
    printf("Seleccione una opción: ");
    scanf(" %d", &opcion);
    getchar(); // Limpiar el buffer de entrada

    switch (opcion)
    {
    case 0:
      printf("Saliendo...\n");
      break;
    case 1:
      cargarEquipo(equipos, equiposCargados);
      equiposCargados++;
      break;
    case 2:
      int idEquipo;
      printf("Ingrese el ID del equipo al que desea agregar un jugador");
      scanf(" %d", &idEquipo);
      getchar(); // Limpiar el buffer de entrada
      cargarJugador(equipos, CANT_JUGADORES, idEquipo);
      break;
    case 3:
      listarEquipos(equipos, equiposCargados);
      break;
    default:
      printf("Opción inválida, intente nuevamente.\n");
      break;
    }
  } while (opcion != 0);

  listarEquipos(equipos, equiposCargados);

  return 0;
}