#include "main.h"

/**
* print_square - print a square of hash
* @size: detemines heigh and width
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
