#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equal to a decimal number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (n != 0)
	{
		if (n % 2 == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		
		n /= 2;
	}
}

