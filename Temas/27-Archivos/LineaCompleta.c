#include <stdio.h>

int main() {
    FILE *archivo;
    char frase[100];

    // Escribir frases completas en el archivo
    archivo = fopen("frases.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    printf("Ingrese 3 frases:\n");
    for (int i = 0; i < 3; i++) {
        printf("Frase %d: ", i + 1);
        getchar(); // Limpiar buffer de enter anterior
        fgets(frase, sizeof(frase), stdin); // Leer frase completa
        fputs(frase, archivo); // Guardar frase en archivo
    }

    fclose(archivo);

    // Leer todas las frases del archivo
    archivo = fopen("frases.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("\nFrases leídas del archivo:\n");
    while (fgets(frase, sizeof(frase), archivo)) {
        printf("%s", frase); // Mostrar cada frase
    }

    fclose(archivo);
    return 0;
}
