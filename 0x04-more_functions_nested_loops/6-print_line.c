#include "main.h"
/**
* print_line - print '_'
* @n: int value
*/

void print_line(int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
		_putchar('_');

	_putchar('\n');
}
