#include <stdio.h>

unsigned int factorial_recursivo(int numero) {
	if (numero < 0) {
		printf("Error: El factorial no está definido para números negativos.\n");
		return 0;
	}
	
	if (numero == 0 || numero == 1) {
		return 1;
	} else {
		return numero * factorial_recursivo(numero - 1);
	}
}

int main() {
	int numero;
	
	printf("Ingrese un número entero: ");
	scanf("%d", &numero);
	
	unsigned int resultado = factorial_recursivo(numero);
	
	printf("El factorial de %d es: %u\n", numero, resultado);
	
	return 0;
}
