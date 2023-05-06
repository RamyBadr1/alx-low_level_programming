#include "main.h"

/**
* flip_bits - count number of bits change
* to get from one number to another number
* @n: 1st number
* @m: 2nd number
* Return: counnnt of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((xor >> i) & 1)
			count++;
	}


	return (count);
}
