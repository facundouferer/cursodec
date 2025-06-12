#include <stdio.h>

int main() {
    int numero;
    FILE *archivo;

    // Pedir al usuario un número entre 1 y 10
    do {
        printf("Ingrese un numero entre 1 y 10: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 10);

    // Abrir el archivo en modo escritura
    archivo = fopen("tabla.txt", "w");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; // Salir con código de error
    }

    // Generar y guardar la tabla de multiplicar en el archivo
    for (int i = 1; i <= 10; i++) {
        fprintf(archivo, "%d x %d = %d\n", numero, i, numero * i);
    }

    // Cerrar el archivo
    fclose(archivo);

    printf("La tabla de multiplicar del %d ha sido guardada en tabla.txt\n", numero);

    return 0; // Salir con éxito
}
