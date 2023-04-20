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

	if (separator && n)
	{
		for (i = 1; i <= n; i++)
		{
			if (i != n)
				printf("%d%s", va_arg(ptr, int), separator);
			else
				printf("%d", va_arg(ptr, int));

		}

		putchar('\n');
	}

	va_end(ptr);
}
