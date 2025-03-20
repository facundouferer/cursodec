// 1️⃣ Directivas del preprocesador
#include <stdio.h> // Librería estándar para entrada/salida
#include <math.h>  // Librería para funciones matemáticas
// 2️⃣ Declaración de funciones (prototipos)
float calcularAreaCirculo(float radio);
// 3️⃣ Función principal (punto de entrada del programa)
int main()
{
  // 4️⃣ Definición de variables
  float radio, area;
  // 5️⃣ Lógica del programa
  printf("Ingrese el radio del círculo: ");
  scanf("%f", &radio);
  // Llamada a una función auxiliar
  area = calcularAreaCirculo(radio);
  printf("El área del círculo con radio %.2f es: %.2f\n", radio, area);
  return 0; // 6️⃣ Fin del programa (código de salida)
}
// 7️⃣ Definición de funciones auxiliares
float calcularAreaCirculo(float radio)
{
  return M_PI * radio * radio; // Fórmula del área de un círculo
}
