#include "main.h"

/**
* swap_int - swaps values between a and b
* @a: int
* @b: int
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
