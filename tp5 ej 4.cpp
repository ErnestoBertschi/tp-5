#include <stdio.h>

int encontrar_minimo(int num1, int num2, int num3) {
	int minimo = num1;
	if (num2 < minimo) {
		minimo = num2;
	}
	if (num3 < minimo) {
		minimo = num3;
	}
	return minimo;
}

int main() {
	int num1, num2, num3;
	
	printf("Ingrese tres números enteros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int minimo = encontrar_minimo(num1, num2, num3);
	
	printf("El número menor es: %d\n", minimo);
	
	return 0;
}
