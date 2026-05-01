#include <stdio.h>
#include <unistd.h> // Para usar sleep()
// Función que representa un proceso en ejecución
void procesoEjemplo()
{
  printf("🔵 Proceso iniciado...\n");
  sleep(2); // Simula que el proceso está haciendo algo durante 2 segundos
  printf("🟢 Proceso ejecutándose...\n");
  sleep(2);
  printf("✅ Proceso finalizado.\n");
}
int main()
{
  printf("🖥️ Iniciando programa...\n");
  // Llamamos a la función que simula un proceso
  procesoEjemplo();
  printf("🏁 Programa terminado.\n");
  return 0;
}
