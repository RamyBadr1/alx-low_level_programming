#include "main.h"

void _puts(char *s)
{
	int i;

	for (int i = 0; i != '\0'; i++)
		_putchar(*(s + i));
}
