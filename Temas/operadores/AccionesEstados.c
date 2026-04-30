#include <stdio.h>
#include <unistd.h> // Para sleep()

void ejecutarProceso()
{
  printf("🔵 Estado: NUEVO - Creando proceso...\n");
  sleep(1);
  printf("🟡 Estado: LISTO - Esperando asignación de CPU...\n");
  sleep(1);
  printf("🟢 Estado: EJECUCIÓN - El proceso está corriendo...\n");
  sleep(2); // Simula el tiempo de ejecución
  printf("⏳ Estado: ESPERA - El proceso está esperando entrada del usuario...\n");
  char input;
  printf("Presiona cualquier tecla y Enter para continuar: ");
  scanf(" %c", &input); // Espera entrada del usuario
  printf("✅ Estado: TERMINADO - El proceso ha finalizado.\n");
}

int main()
{
  printf("🚀 Iniciando el programa...\n");
  ejecutarProceso();
  printf("🏁 Programa finalizado.\n");
  return 0;
}


