#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2) {
	float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return distancia;
}

int main() {
	float x1, y1, x2, y2;
	
	printf("Ingrese las coordenadas x e y del primer punto (x1 y1): ");
	scanf("%f %f", &x1, &y1);
	
	printf("Ingrese las coordenadas x e y del segundo punto (x2 y2): ");
	scanf("%f %f", &x2, &y2);
	
	float distancia = calcular_distancia(x1, y1, x2, y2);
	
	printf("La distancia entre los puntos es: %.2f\n", distancia);
	
	return 0;
}
