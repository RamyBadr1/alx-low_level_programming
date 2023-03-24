#include "main.h"
#include <stdio.h>
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
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
				continue;
			}
			_putchar(num + '0');
		}
		printf("%c", '\n');
	}
}
