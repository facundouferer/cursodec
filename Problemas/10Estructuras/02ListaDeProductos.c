#include <stdio.h>
#define TAM_NOMBRE 50
#define MAX 2
struct Producto{
    char nombre[TAM_NOMBRE];
    float precio;
    int cantidad;
} ;

int main() {
    struct Producto productos[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Producto %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]", productos[i].nombre);
        printf("Precio: ");
        scanf("%f", &productos[i].precio);
        printf("Cantidad: ");
        scanf("%d", &productos[i].cantidad);
        printf("\n");
    }

    printf("PRODUCTO \tCANTIDAD \tPRECIO \tTOTAL\n");
    for (i = 0; i < MAX; i++) {
        float valor_total = productos[i].precio * productos[i].cantidad;
        printf("%s \t%d \t%.2f \t$%.2f\n", productos[i].nombre, productos[i].cantidad, productos[i].precio, valor_total);
    }

    return 0;
}