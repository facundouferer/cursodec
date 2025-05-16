#include <stdio.h>
#include <string.h>

// Estructura para un producto
struct Producto {
    char nombre[30];
    float precio;
    int stock;
};

int main() {
    struct Producto productos[3]; // Arreglo de estructuras

    // Ingreso de datos
    for (int i = 0; i < 3; i++) {
        printf("Producto %d\n", i + 1);

        printf("Nombre: ");
        getchar(); // Limpiamos buffer
        fgets(productos[i].nombre, sizeof(productos[i].nombre), stdin);
        productos[i].nombre[strcspn(productos[i].nombre, "\n")] = '\0';

        printf("Precio: ");
        scanf("%f", &productos[i].precio);

        printf("Stock: ");
        scanf("%d", &productos[i].stock);
    }

    // Mostrar datos
    printf("\nLista de productos:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s - Precio: $%.2f - Stock: %d unidades\n",
               i + 1, productos[i].nombre, productos[i].precio, productos[i].stock);
    }

    return 0;
}
