#include "main.h"

/**
 * puts - Entry point
 * @s - string
 */
void _puts(char *s)
{
	int i;
	
	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));

	_putchar('\n');
}
