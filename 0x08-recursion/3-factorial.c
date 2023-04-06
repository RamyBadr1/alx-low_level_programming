#include <stdio.h>

/**
* factorial - calculate the factorial of @n.
* @n: an integer
* Return: a factorial of @n.
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
