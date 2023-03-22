#include "main.h"

/**
* print_last_digit - calculate the remainder of (num) / 10
* @n: int value to get its last digit
* Return: return the remainder of (num) / 10
*/

int print_last_digit(int num) {
	if (num < 0)
		num = -1 * num;

	return (num % 10);
}

