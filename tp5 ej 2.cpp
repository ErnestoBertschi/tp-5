#include <stdio.h>
#include <math.h>

void calcular_raices_cuadraticas(float a, float b, float c, int opcion_raiz) {
	float discriminante = b * b - 4 * a * c;
	float raiz1, raiz2;
	
	if (discriminante >= 0) {
		raiz1 = (-b + sqrt(discriminante)) / (2 * a);
		raiz2 = (-b - sqrt(discriminante)) / (2 * a);
		
		if (opcion_raiz == 1) {
			printf("Raíz 1: %.2f\n", raiz1);
		} else if (opcion_raiz == 2) {
			printf("Raíz 2: %.2f\n", raiz2);
		} else {
			printf("Opción de raíz no válida. Debe ser 1 o 2.\n");
		}
	} else {
		printf("Las raíces son complejas y no se pueden calcular con esta función.\n");
	}
}

int main() {
	float a, b, c;
	int opcion_raiz;
	
	printf("Ingrese el coeficiente a: ");
	scanf("%f", &a);
	printf("Ingrese el coeficiente b: ");
	scanf("%f", &b);
	printf("Ingrese el coeficiente c: ");
	scanf("%f", &c);
	
	printf("Seleccione una de las raíces (1 o 2): ");
	scanf("%d", &opcion_raiz);
	
	calcular_raices_cuadraticas(a, b, c, opcion_raiz);
	
	return 0;
}

