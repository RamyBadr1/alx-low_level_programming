#include "main.h"

/**
* print_last_digit - calculate the remainder of (num) / 10
* @n: int value to get its last digit
* Return: return the remainder of (num) / 10
*/

int print_last_digit(int num)
{
	int result = num % 10;

	if (result < 0)
		result = -result;

	_putchar('0' + result);
	return (result);
}

