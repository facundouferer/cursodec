#include <stdio.h>
#include <stdlib.h>

struct Cliente
{
  int dni;
  char nombre[30];
  char apellido[30];
  float saldo;
  int habilitado; // 1 para habilitado, 0 para inhabilitado
};

// Prototipos
void ordenarClientes(struct Cliente clientes[], int cantidad);
struct Cliente buscarCliente(struct Cliente clientes[], int cantidad, int dni);
void listarClientesPorSaldo(struct Cliente clientes[], int cantidad);
void listarClientesPorDNI(struct Cliente clientes[], int cantidad);
void listarClientesHabilitados(struct Cliente clientes[], int cantidad);
void eliminarCliente(struct Cliente clientes[], int *cantidad, int dni);
void deshabilitarCliente(struct Cliente clientes[], int cantidad, int dni);
void habilitarCliente(struct Cliente clientes[], int cantidad, int dni);
void modificarCliente(struct Cliente clientes[], int cantidad, int dni);
void mostrarEstadisticas(struct Cliente clientes[], int cantidad);
void calcularSaldoPromedio(struct Cliente clientes[], int cantidad);
void agregarCliente(struct Cliente clientes[], int *cantidad, struct Cliente nuevoCliente);
void mostrarMenu();

int main()
{
  struct Cliente clientes[100];
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
      struct Cliente nuevo;
      printf("DNI: ");
      scanf("%d", &nuevo.dni);
      printf("Nombre: ");
      scanf("%s", nuevo.nombre);
      printf("Apellido: ");
      scanf("%s", nuevo.apellido);
      printf("Saldo: ");
      scanf("%f", &nuevo.saldo);
      nuevo.habilitado = 1;
      agregarCliente(clientes, &cantidad, nuevo);
      break;
    }
    case 2:
    {
      int dni;
      printf("DNI del cliente a eliminar: ");
      scanf("%d", &dni);
      eliminarCliente(clientes, &cantidad, dni);
      break;
    }
    case 3:
      listarClientesPorSaldo(clientes, cantidad);
      break;
    case 4:
    {
      int dni;
      printf("DNI a buscar: ");
      scanf("%d", &dni);
      struct Cliente encontrado = buscarCliente(clientes, cantidad, dni);
      if (encontrado.dni != -1)
      {
        printf("DNI: %d, Nombre: %s %s, Saldo: %.2f\n",
               encontrado.dni, encontrado.nombre, encontrado.apellido, encontrado.saldo);
      }
      else
      {
        printf("Cliente no encontrado.\n");
      }
      break;
    }
    case 5:
      listarClientesPorDNI(clientes, cantidad);
      break;
    case 6:
      listarClientesHabilitados(clientes, cantidad);
      break;
    case 7:
    {
      int dni;
      printf("DNI del cliente a deshabilitar: ");
      scanf("%d", &dni);
      deshabilitarCliente(clientes, cantidad, dni);
      break;
    }
    case 8:
    {
      int dni;
      printf("DNI del cliente a habilitar: ");
      scanf("%d", &dni);
      habilitarCliente(clientes, cantidad, dni);
      break;
    }
    case 9:
    {
      int dni;
      printf("DNI del cliente a modificar: ");
      scanf("%d", &dni);
      modificarCliente(clientes, cantidad, dni);
      break;
    }
    case 10:
      mostrarEstadisticas(clientes, cantidad);
      break;
    case 11:
      calcularSaldoPromedio(clientes, cantidad);
      break;
    case 12:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opcion invalida.\n");
    }

  } while (opcion != 12);

  return 0;
}

// ordenar clientes con el Metodo de la Burbuja (Bubble Sort)
void ordenarClientes(struct Cliente clientes[], int cantidad)
{
  struct Cliente aux;
  for (int i = 0; i < cantidad - 1; i++)
  {
    for (int j = 0; j < cantidad - i - 1; j++)
    {
      if (clientes[j].dni > clientes[j + 1].dni)
      {
        aux = clientes[j];
        clientes[j] = clientes[j + 1];
        clientes[j + 1] = aux;
      }
    }
  }
}

// mostrar cantidad de habilitados y inhabilitados
void mostrarEstadisticas(struct Cliente clientes[], int cantidad)
{
  int habilitados = 0;
  int inhabilitados = 0;
  for (int i = 0; i < cantidad; i++)
  {
    if (clientes[i].habilitado == 1)
      habilitados++;
    else
      inhabilitados++;
  }
  printf("Total de clientes: %d\n", cantidad);
  printf("Habilitados: %d\n", habilitados);
  printf("Inhabilitados: %d\n", inhabilitados);
}

// calcular saldo promedio
void calcularSaldoPromedio(struct Cliente clientes[], int cantidad)
{
  if (cantidad == 0)
  {
    printf("No hay clientes cargados.\n");
    return;
  }
  float suma = 0;
  for (int i = 0; i < cantidad; i++)
  {
    suma += clientes[i].saldo;
  }
  float promedio = suma / cantidad;
  printf("Saldo promedio: %.2f\n", promedio);
}

void eliminarCliente(struct Cliente clientes[], int *cantidad, int dni)
{
  int i, j;
  int encontrado = 0;

  for (i = 0; i < *cantidad; i++)
  {
    if (clientes[i].dni == dni)
    {
      encontrado = 1;
      break;
    }
  }

  if (encontrado)
  {
    for (j = i; j < *cantidad - 1; j++)
    {
      clientes[j] = clientes[j + 1];
    }
    (*cantidad)--;
    printf("Cliente con DNI %d eliminado.\n", dni);
  }
  else
  {
    printf("Cliente con DNI %d no encontrado.\n", dni);
  }
}

void agregarCliente(struct Cliente clientes[], int *cantidad, struct Cliente nuevoCliente)
{
  if (*cantidad < 100)
  {
    clientes[*cantidad] = nuevoCliente;
    (*cantidad)++;
    printf("Cliente agregado: DNI %d, Nombre: %s %s\n", nuevoCliente.dni, nuevoCliente.nombre, nuevoCliente.apellido);
  }
  else
  {
    printf("No se pueden agregar mas clientes. Capacidad maxima alcanzada.\n");
  }
}

void mostrarMenu()
{
  printf("\nMenu de opciones:\n");
  printf("1. Agregar cliente\n");
  printf("2. Eliminar cliente\n");
  printf("3. Listar clientes por saldo\n");
  printf("4. Buscar cliente por DNI\n");
  printf("5. Listar clientes por DNI\n");
  printf("6. Mostrar clientes habilitados\n");
  printf("7. Deshabilitar cliente\n");
  printf("8. Habilitar cliente\n");
  printf("9. Modificar cliente\n");
  printf("10. Mostrar estadisticas (habilitados/inhabilitados)\n");
  printf("11. Calcular saldo promedio\n");
  printf("12. Salir\n");
}
