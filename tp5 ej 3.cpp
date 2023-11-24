#include <stdio.h>

float resistor_equivalente(float R1, float R2, float R3) {
	return 1.0 / ((1.0 / R1) + (1.0 / R2) + (1.0 / R3));
}

int main() {
	float R1, R2, R3;
	
	printf("Ingrese el valor de R1: ");
	scanf("%f", &R1);
	printf("Ingrese el valor de R2: ");
	scanf("%f", &R2);
	printf("Ingrese el valor de R3: ");
	scanf("%f", &R3);
	
	float Req = resistor_equivalente(R1, R2, R3);
	
	printf("El valor del resistor equivalente es: %.2f\n", Req);
	
	return 0;
}
