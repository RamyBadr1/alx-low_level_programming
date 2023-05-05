#include "main.h"

/**
 * print_binary - prints the binary equal to a decimal number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n != 0)
	{
		if (n % 2 == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}

		n /= 2;
	}
}
