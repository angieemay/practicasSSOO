#include <stdio.h>
#include "funciones.h"
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"
#include <stdlib.h>
int main() {

	printf("1. Sumar\n");
	printf("2. Restar\n");
	printf("3. Multiplicar\n");
	printf("4. Dividir\n");
	printf("5. Salir\n");

	int valorMenu;
	printf("Introduzca que opreando desea realizar: ");
	scanf("%d", &valorMenu);

	int a,b;
	printf("Valor primer operando: ");
	scanf("%d", &a);

	printf("Valor segundo operando: ");
	scanf("%d", &b);

	switch(valorMenu) {
		case 1:	printf("El resultado de la suma es: %d\n", sumar(a,b));
			break;
		case 2:	printf("El resultado de la resta es: %d\n", restar(a,b));
			break;
		case 3:	printf("El resultado de la multiplicación es: %d\n", multiplicar(a,b));
			break;
		case 4:	printf("El resultado de la división es: %f\n", dividir(a,b));
			break;
		case 5: exit(-1);
			break;
		default: printf("Error.");
	}
	return 0;


} 
