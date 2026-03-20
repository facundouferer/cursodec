#include <stdio.h>

int main()
{
	int num1, num2, opcion, res;

	printf("Ingrese la operación que desea realizar:\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicación\n");
	printf("4. División\n");
	printf("Opción: ");
	scanf("%d", &opcion);

	if (opcion > 0 && opcion < 5)
	{
		printf("Por favor, ingrese el primer número:\n");
		scanf("%d", &num1);
		printf("Por favor, ingrese el segundo número:\n");
		scanf("%d", &num2);
		switch (opcion)
		{
		case 1:;
			res = num1 + num2;
			break;
		case 2:;
			res = num1 - num2;
			break;
		case 3:;
			res = num1 * num2;
			break;
		default:;
			res = num1 / num2;
			break;
		}
		printf("Su resultado es %d", res);
	}
	else
		printf("Valor no vàlido, opción inexistente.");
	return 0;
}