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
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive != NULL)
	{
		if (exclusive && 1ul)
			count++;
		
		exclusive = exclusive + 1;
	}

	return (count);
}
