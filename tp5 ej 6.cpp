#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float calcular_propiedad(float radio, int opcion) {
	switch (opcion) {
	case 1: // Longitud de la circunferencia
		return 2 * PI * radio;
	case 2: // Área del círculo
		return PI * pow(radio, 2);
	case 3: // Volumen de la esfera
		return (4.0/3.0) * PI * pow(radio, 3);
	default:
		printf("Opción no válida. Debe ser 1, 2 o 3.\n");
		return -1;
	}
}

int main() {
	float radio;
	int opcion;
	
	printf("Ingrese el radio: ");
	scanf("%f", &radio);
	
	printf("Seleccione una opción:\n");
	printf("1 - Longitud de la circunferencia\n");
	printf("2 - Area del círculo\n");
	printf("3 - Volumen de la esfera\n");
	scanf("%d", &opcion);
	
	float resultado = calcular_propiedad(radio, opcion);
	
	if (resultado != -1) {
		printf("El resultado es: %.2f\n", resultado);
	}
	
	return 0;
}
