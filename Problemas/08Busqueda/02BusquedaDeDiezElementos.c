#include <stdio.h>

int main() {
    int arr[10];
    int i, num, left, right, mid, found = 0;

    printf("Ingrese 10 numeros ordenados en forma ascendente:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &num);

    left = 0;
    right = 9;
    found = 0;

    while(left <= right && !found) {
        mid = (left + right) / 2;
        if(arr[mid] == num) {
            found = 1;
        } else if(arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(found) {
        printf("El numero %d fue encontrado en la posicion %d.\n", num, mid);
    } else {
        printf("El numero %d no fue encontrado.\n", num);
    }

    return 0;
}