#include <stdio.h>
#include <string.h>
#define MAX_PRODUCTOS 1000

/** Definir al Estructura de los datos */
struct Producto
{
  int nroProducto;
  char nombre[20];
  float precio;
};

struct Producto buscarProducto(struct Producto inventario[], int n);
void listarProductos(struct Producto inventario[], int n);
void eliminarProducto(struct Producto inventario[], int *n);
void agreagarProducto(struct Producto inventario[], int *n);

int main()

{

  /** Inicializar los datos  */

  struct Producto inventario[MAX_PRODUCTOS] = {
      {58293012, "Monitor", 120.00},
      {19485726, "Mousepad", 10.00},
      {83746501, "Procesador", 200.00},
      {37482910, "Teclado", 25.50},
      {92837465, "Fuente ATX", 75.00},
      {48291037, "Webcam", 55.00},
      {10293847, "Silla Gamer", 250.00},
      {74659283, "Impresora", 85.00},
      {29384756, "Disco SSD", 95.00},
      {65748392, "Mouse Choco", 15.75},
      {51928374, "Parlantes", 40.20},
      {84756291, "Cables HDMI", 8.50},
      {38475629, "Auriculares", 65.50},
      {91028374, "Gabinete", 60.00},
      {27384950, "Microfono", 30.00},
      {46573829, "Adaptador USB", 5.99},
      {15263748, "Memoria RAM", 50.00},
      {73849506, "Pendrive", 12.99},
      {62738495, "Placa Video", 350.00},
      {39485761, "Escritorio", 150.00}};

  int n = 20; // cantidad actual de productos

  int i, j;
  struct Producto temp;

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - 1 - i; j++)
    {
      if (inventario[j].nroProducto > inventario[j + 1].nroProducto)
      {
        // Intercambio
        temp = inventario[j];
        inventario[j] = inventario[j + 1];
        inventario[j + 1] = temp;
      }
    }
  }

  /** Menu de opciones */

  int opcion;

  do
  {
    printf("\nMenu de opciones:\n");
    printf("1) Listar Productos\n");
    printf("2) Buscar Producto\n");
    printf("3) Eliminar Producto\n");
    printf("4) Agregar un producto\n");
    printf("5) Modificar Producto\n");
    printf("6) Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      printf("\nInventario ordenado y actualizado:\n");
      listarProductos(inventario, n);
      break;

    case 2:
    {
      struct Producto productoEncontrado;
      productoEncontrado = buscarProducto(inventario, n);
      if (productoEncontrado.nroProducto != 0)
      {
        printf("\nProducto encontrado:\n");
        printf("Numero de Producto: %d\n", productoEncontrado.nroProducto);
        printf("Nombre: %s\n", productoEncontrado.nombre);
        printf("Precio: %.2f\n", productoEncontrado.precio);
      }
      else
      {
        printf("\nNo se encontro el producto.\n");
      }
      break;
    }
    case 3:
    {
      eliminarProducto(inventario, &n);

      break;
    }

    case 4:
    {
      agreagarProducto(inventario, &n);
      break;
    }

    case 5:
    {
      printf("\nOpcion de modificar producto no implementada.\n");
      break;
    }

    case 6:
      printf("\nSaliendo del programa...\n");
      break;

    default:
      printf("\nOpcion invalida. Intente nuevamente.\n");
      break;
    }
  } while (opcion != 6);

  return 0;
}

struct Producto buscarProducto(struct Producto inventario[], int n)
{
  int nroProductoBuscado;
  int inicio = 0;
  int fin = n - 1;

  printf("Ingrese el numero de producto a buscar: ");
  scanf("%d", &nroProductoBuscado);

  while (inicio <= fin)
  {
    int medio = inicio + (fin - inicio) / 2;

    if (inventario[medio].nroProducto == nroProductoBuscado)
    {
      return inventario[medio];
    }

    if (inventario[medio].nroProducto < nroProductoBuscado)
    {
      inicio = medio + 1;
    }
    else
    {
      fin = medio - 1;
    }
  }
  // Devolver un producto vacío si no se encuentra
  struct Producto productoVacio = {0, "", 0.0};
  return productoVacio;
}

void listarProductos(struct Producto inventario[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d \t %d \t %s \t %.2f\n",
           i + 1,
           inventario[i].nroProducto,
           inventario[i].nombre,
           inventario[i].precio);
  }
}

void eliminarProducto(struct Producto inventario[], int *n)
{
  int nroProductoEliminar;
  printf("Ingrese el numero de producto a eliminar: ");
  scanf("%d", &nroProductoEliminar);

  int i, j;
  int encontrado = 0;

  for (i = 0; i < *n; i++)
  {
    if (inventario[i].nroProducto == nroProductoEliminar)
    {
      encontrado = 1;
      break;
    }
  }

  if (!encontrado)
  {
    printf("\nNo se encontro un producto con ese numero.\n");
    return;
  }

  for (j = i; j < *n - 1; j++)
  {
    inventario[j] = inventario[j + 1];
  }

  (*n)--;
  printf("\nProducto eliminado correctamente.\n");
}

void agreagarProducto(struct Producto inventario[], int *n)
{
  if (*n >= MAX_PRODUCTOS)
  {
    printf("\nNo se pueden agregar mas productos. Inventario lleno.\n");
    return;
  }

  struct Producto nuevoProducto;

  printf("Ingrese el numero de producto: ");
  scanf("%d", &nuevoProducto.nroProducto);
  printf("Ingrese el nombre del producto: ");
  scanf(" %19[^\n]", nuevoProducto.nombre);
  printf("Ingrese el precio del producto: ");
  scanf("%f", &nuevoProducto.precio);

  inventario[*n] = nuevoProducto;
  (*n)++;

  // Reordenar el inventario después de agregar un nuevo producto
  int i, j;
  struct Producto temp;

  for (i = 0; i < *n - 1; i++)
  {
    for (j = 0; j < *n - 1 - i; j++)
    {
      if (inventario[j].nroProducto > inventario[j + 1].nroProducto)
      {
        // Intercambio
        temp = inventario[j];
        inventario[j] = inventario[j + 1];
        inventario[j + 1] = temp;
      }
    }
  }

  printf("\nProducto agregado y ordenado correctamente.\n");
}

void modificarProducto(struct Producto inventario[], int n)
{
  printf("Ingrese el numero de producto a modificar: ");
  int nroProductoModificar;
  scanf("%d", &nroProductoModificar);

  struct Producto productoEncontrado;
  productoEncontrado = buscarProducto(inventario, n);

  if (productoEncontrado.nroProducto == 0)
  {
    printf("\nNo se encontro el producto.\n");
    return;
  }

  printf("Ingrese el nuevo nombre del producto: ");
  scanf(" %19[^\n]", productoEncontrado.nombre);
  printf("Ingrese el nuevo precio del producto: ");
  scanf("%f", &productoEncontrado.precio);

  // Actualizar el producto en el inventario
  for (int i = 0; i < n; i++)
  {
    if (inventario[i].nroProducto == nroProductoModificar)
    {
      inventario[i] = productoEncontrado;
      break;
    }
  }

  printf("\nProducto modificado correctamente.\n");
}