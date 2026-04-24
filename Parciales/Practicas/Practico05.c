/**
 * Escribe un programa en C que:
Lea dos números enteros ingresados por el usuario (llámalos a y b).
Utilizando operadores matemáticos, calcule y muestre:
La suma (a + b)
La resta (a - b)
La multiplicación (a * b)
La división entera (a / b, considerando que b no es cero)
El resto de la división entera (a % b)
Utilizando operadores relacionales, compare a y b y muestre el resultado (1 si es verdadero, 0 si es falso) de:
a == b
a != b
a > b
a < b
a >= b
a <= b
Utilizando operadores lógicos, calcule y muestre el resultado (1 o 0) de:
(a > b) && (b != 0)
(a > b) || (b != 0)
Demuestre el uso de operadores de asignación combinados:
A la variable a asígnele el valor original de a más b usando += y luego muestre el nuevo valor de a.
A la variable b asígnele el valor original de b multiplicado por 2 usando *= y luego muestre el nuevo valor de b.
Restricción: No uses estructuras de decisión (como if). Solo utiliza expresiones con operadores y muestra los resultados con printf. Recuerda incluir #include <stdio.h> y usar scanf para la entrada.
 */

#include <stdio.h>

int main()
{
  int a, b;

  // Entrada
  printf("Ingrese dos números enteros (a b): ");
  scanf("%d %d", &a, &b);

  // Operadores matemáticos
  printf("\nResultados matemáticos:\n");
  printf("Suma: %d\n", a + b);
  printf("Resta: %d\n", a - b);
  printf("Multiplicación: %d\n", a * b);
  printf("División entera: %d\n", a / b);
  printf("Resto: %d\n", a % b);

  // Operadores relacionales
  printf("\nComparaciones (1=verdadero, 0=falso):\n");
  printf("a == b -> %d\n", a == b);
  printf("a != b -> %d\n", a != b);
  printf("a > b -> %d\n", a > b);
  printf("a < b -> %d\n", a < b);
  printf("a >= b -> %d\n", a >= b);
  printf("a <= b -> %d\n", a <= b);

  // Operadores lógicos
  printf("\nOperadores lógicos:\n");
  printf("(a > b) && (b != 0) -> %d\n", (a > b) && (b != 0));
  printf("(a > b) || (b != 0) -> %d\n", (a > b) || (b != 0));

  // Operadores de asignación combinados
  printf("\nAsignación combinada:\n");
  a += b; // equivalente a a = a + b
  printf("a += b -> nuevo valor de a: %d\n", a);
  b *= 2; // equivalente a b = b * 2
  printf("b *= 2 -> nuevo valor de b: %d\n", b);

  return 0;
}