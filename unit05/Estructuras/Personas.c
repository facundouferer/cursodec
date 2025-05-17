#include <stdio.h>
#include <string.h>

// 1. Definimos una estructura llamada 'Persona'
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // 2. Creamos una variable individual de tipo Persona (no está en el arreglo)
    struct Persona personaIndividual;

    // Cargamos datos manualmente
    strcpy(personaIndividual.nombre, "Carlos");
    personaIndividual.edad = 30;
    personaIndividual.altura = 1.75;

    // Mostramos los datos de la persona individual
    printf("=== Persona Individual ===\n");
    printf("Nombre: %s\n", personaIndividual.nombre);
    printf("Edad: %d\n", personaIndividual.edad);
    printf("Altura: %.2f m\n", personaIndividual.altura);

    // 3. Creamos un arreglo de estructuras (varias personas)
    struct Persona personas[3];

    // 4. Cargamos datos en el arreglo
    strcpy(personas[0].nombre, "Ana");
    personas[0].edad = 22;
    personas[0].altura = 1.60;

    strcpy(personas[1].nombre, "Luis");
    personas[1].edad = 28;
    personas[1].altura = 1.80;

    strcpy(personas[2].nombre, "María");
    personas[2].edad = 25;
    personas[2].altura = 1.65;

    // 5. Mostramos todos los datos del arreglo
    printf("\n=== Personas en el Arreglo ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Persona %d:\n", i + 1);
        printf("Nombre: %s\n", personas[i].nombre);
        printf("Edad: %d\n", personas[i].edad);
        printf("Altura: %.2f m\n", personas[i].altura);
        printf("-------------------------\n");
    }

    return 0;
}
