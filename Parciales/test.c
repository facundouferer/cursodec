#include <stdio.h>
 
int main() {
int num;
 
printf("Ingrese un número: ");
scanf("%d", &num);
 
if (num % 7 == 0 && num > 50) {
printf("OK\n");
}
 
return 0;
}