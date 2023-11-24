#include <stdio.h>
#include <math.h>

float calcular_distancia_3d(float x1, float y1, float z1, float x2, float y2, float z2) {
	float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
	return distancia;
}

int main() {
	float x1, y1, z1, x2, y2, z2;
	
	printf("Ingrese las coordenadas x, y, z del primer punto (x1 y1 z1): ");
	scanf("%f %f %f", &x1, &y1, &z1);
	
	printf("Ingrese las coordenadas x, y, z del segundo punto (x2 y2 z2): ");
	scanf("%f %f %f", &x2, &y2, &z2);
	
	float distancia = calcular_distancia_3d(x1, y1, z1, x2, y2, z2);
	
	printf("La distancia entre los puntos en el espacio es: %.2f\n", distancia);
	
	return 0;
}
