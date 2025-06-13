#include <stdio.h>

int main() {
    FILE *archivo;
    int numero;

    // Pedir al usuario un número
    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    // Escribir el número en el archivo
    archivo = fopen("numero.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return 1;
    }
    fprintf(archivo, "%d", numero);
    fclose(archivo);

    // Leer el número desde el archivo
    archivo = fopen("numero.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }
    fscanf(archivo, "%d", &numero);
    fclose(archivo);

    // Mostrar el número leído
    printf("El número leído del archivo es: %d\n", numero);

    return 0;
}
