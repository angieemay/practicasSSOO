#include <stdio.h>
#include "funciones.h"

int restar(int op1, int op2) {
	if (op2 > op1) {
		printf("La resta es negativa");
	}
	else {
		return (op1+op2);
	}
	return 0;
}

