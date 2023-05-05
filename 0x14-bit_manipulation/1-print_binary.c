#include "main.h"

/**
 * print_binary - prints the binary equal to a decimal number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned int current;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			x++;
		}
		else if (count)
			_putchar('0');
	}

}
