
#include "bscal_16.h"
#include <math.h>
#include <stdio.h>

void f_to_b16 (B_SCAL16 * b16, int b, double f) {

	double mul = pow(2,WS - 1 - b);

	printf ("f_to_b16: b=%d f=%f mul=%f ", b,f,mul);
	f *= mul;

	if ( f > BMAX || f < BMIN ) {
		b16->flag = 1; // number invalid
	}
	else {
		b16->flag = 0;
		b16->value = (int16_t) f;
		printf ("f_to_b16: value=%d\n", b16->value);
	}
}
			

