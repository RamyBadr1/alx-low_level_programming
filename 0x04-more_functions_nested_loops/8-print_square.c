#include "main.h"

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	int i;

	for (i = 0; i < size; i++)
	{
		_putchar("#");
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
