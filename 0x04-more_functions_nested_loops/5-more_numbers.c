#include "main.h"
/**
* more_numbers - print numbers from 0 to 14.
*/
void more_numbers(void)
{
	int loops;
	int num;

	for (loops = 0; loops < 10; loops++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar('1');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
