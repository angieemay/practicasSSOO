#include <stdio.h>
#include "funciones.h"

float dividir(int op1, int op2) {
	if (op2 == 0) {
		printf("No se puede dividir por 0.");
	}
	else {
		return (op1 / op2);
	}
	return 0;
}

