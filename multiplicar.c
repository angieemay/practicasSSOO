#include <stdio.h>
#include "funciones.h"

int multiplicar(int op1, int op2) {
	if (op1 < 0 && op2 < 0) {
		printf("La multiplicación da negativa.");
	}
	else {
		return (op1 * op2);
	}
	return 0;
}

