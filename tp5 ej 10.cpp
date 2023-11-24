#include <stdio.h>

int es_bisiesto(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int numero_dia_del_anio(int dia, int mes, int anio) {
	int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int num_dia_anio = 0;
	
	for (int i = 1; i < mes; i++) {
		num_dia_anio += dias_por_mes[i];
		if (i == 2 && es_bisiesto(anio)) {
			num_dia_anio += 1; 
		}
	}
	
	num_dia_anio += dia;
	return num_dia_anio;
}

int main() {
	int dia, mes, anio;
	
	printf("Ingrese el día: ");
	scanf("%d", &dia);
	
	printf("Ingrese el mes: ");
	scanf("%d", &mes);
	
	printf("Ingrese el año: ");
	scanf("%d", &anio);
	
	int numero_dia = numero_dia_del_anio(dia, mes, anio);
	
	printf("El número de día del año es: %d\n", numero_dia);
	
	return 0;
}
