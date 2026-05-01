#include <stdio.h>
#include <string.h>
struct Persona {// Definimos una estructura para una persona
    char nombre[30];
    int edad;
    float altura;
};
int main() {
    struct Persona p; // Creamos una variable del tipo Persona
    printf("Ingrese el nombre: "); // Pedimos al usuario que ingrese los datos
    fgets(p.nombre, sizeof(p.nombre), stdin);
    p.nombre[strcspn(p.nombre, "\n")] = '\0'; // Quitamos el salto de línea
    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);
    printf("Ingrese la altura (en metros): ");
    scanf("%f", &p.altura);
    // Mostramos los datos almacenados
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d años\n", p.edad);
    printf("Altura: %.2f metros\n", p.altura);
    return 0;
}


