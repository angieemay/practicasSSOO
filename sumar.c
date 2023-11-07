#include "funciones.h"
#include <stdio.h>

int sumar(int op1, int op2){
	if (op1 < 0 || op2 < 0) {
		printf("Los sumandos son menores que 0.");
	}
	else {
		return op1 + op2;
	}
	return 0;
}

