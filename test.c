#include "stdio.h"

int sumar_a_b(int a, int b);

int main(){

	int numero1 = 0;
	int numero2 = 0;
	
	printf("Introduce el primer numero: ");
	scanf("%d", &numero1);

	printf("Introduce el segundo numero: ");
	scanf("%d", &numero2);
	
	printf("La suma de %d + %d es %d", numero1, numero2, sumar_a_b(numero1, numero2));
}

int sumar_a_b(int a, int b) {
	return a + b;
}
