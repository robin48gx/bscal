#include <stdint.h>


#define WS 16
#define BMAX 32767
#define BMIN -32768

typedef struct b_scal16 {
	int16_t value;
	int8_t scale;
	int8_t flag;
} B_SCAL16;


B_SCAL16 convert (int b, double f);

