#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - print nums
* @separator: Separator
* @n: num of args
* ...: args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
			printf("%d%s", va_arg(ptr, int), separator);
		else
			printf("%d", va_arg(ptr, int));
	}

	va_end(ptr);

	putchar('\n');
}
