#include <stdio.h>
#include "main.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0 (Success)
*/

int main(void) {
	print_alphabet();
	return (0);
}

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
