#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to search  index
* @index: index of the bit you want to get
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (!n || index > 63)
		return (0);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
