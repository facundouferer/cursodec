#include <stdio.h>

typedef struct {
    char nombre[50];
    float precio;
    int cantidad;
} Producto;

int main() {
    Producto productos[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Producto %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]", productos[i].nombre);
        printf("Precio: ");
        scanf("%f", &productos[i].precio);
        printf("Cantidad: ");
        scanf("%d", &productos[i].cantidad);
        printf("\n");
    }

    printf("PRODUCTO \tCANTIDAD \t\tPRECIO \tTOTAL\n");
    for (i = 0; i < 3; i++) {
        float valor_total = productos[i].precio * productos[i].cantidad;
        printf("%s \t%d \t\t%.2f \t$%.2f\n", productos[i].nombre, productos[i].cantidad, productos[i].precio, valor_total);
    }

    return 0;
}