#include "main.h"

/**
* print_alphabet: prints alphabets using _putchar
*
* Return: void
*/

void print_alphabet(void)
{
	char c;

	for(c = 'a'; c < 'z'; c++)
		_putchar(c);

	putchar('\n');
}
