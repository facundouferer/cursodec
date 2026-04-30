#include <stdio.h>
#include <unistd.h> // Para usar sleep()

int main()
{
  printf("Proceso en ejecución...\n");
  printf("Voy a dormir por 5 segundos.\n");
  sleep(5); // El proceso entra en estado de espera.
  printf("Proceso finalizado.\n");
  return 0;
}
