#include "main.h"

/**
* print_diagonal - print number of spaces then '\'
* @n: used to print number of spaces
*/
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

