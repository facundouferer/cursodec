/*Escribe un programa que solicite al usuario su nombre, edad y altura, y luego los muestre en pantalla.
Ingrese su nombre: Juan
Ingrese su edad: 25
Ingrese su altura en metros: 1.75

Hola, Juan. Tienes 25 años y mides 1.75 metros.

*/

#include <stdio.h>

int main()
{
    char nombre[50];
    int edad;
    float altura;

    printf("Ingrese su nombre: ");
    scanf("%49s", nombre);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    printf("\nHola, %s. Tienes %d años y mides %.2f metros.\n", nombre, edad, altura);

    return 0;
}