#include <stdio.h>
#include <unistd.h>

int main()
{
  int pid = fork(); // Crea un nuevo proceso

  if (pid == 0)
  {
    printf("Soy el proceso hijo, mi PID es %d\n", getpid());
  }
  else
  {
    printf("Soy el proceso padre, mi PID es %d y mi hijo es %d\n", getpid(), pid);
  }

  return 0;
}