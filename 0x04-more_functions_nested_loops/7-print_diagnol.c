#include "main.h"

/**
* print_diagonal - print number of spaces then '\'
* @n: used to print number of spaces
*/
void print_diagonal(int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
		_putchar(' ');

	_putchar('\\');
	_putchar('\n');
}

