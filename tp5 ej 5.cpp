#include <stdio.h>

float calcular_valor_con_descuento(float precio, float descuento) {
	float valor_descuento = precio * (descuento / 100.0);
	return precio - valor_descuento;
}

int main() {
	float precio, descuento;
	
	printf("Ingrese el precio de la compra: ");
	scanf("%f", &precio);
	
	printf("Ingrese el porcentaje de descuento: ");
	scanf("%f", &descuento);
	
	float valor_a_pagar = calcular_valor_con_descuento(precio, descuento);
	
	printf("El valor a pagar con descuento es: %.2f\n", valor_a_pagar);
	
	return 0;
}

