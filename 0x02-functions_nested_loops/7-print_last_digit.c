#include "main.h"
#include <stdio.h>

/**
* print_last_digit - calculate the remainder of (num) / 10
* @n: int value to get its last digit
* Return: return the remainder of (num) / 10
*/

int print_last_digit(int num) {
	int result = num % 10;
	printf("%d", result);
	return result;
}

