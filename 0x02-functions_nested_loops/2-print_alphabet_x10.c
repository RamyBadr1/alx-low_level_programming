#include "main.h"

/*
* Prints all alphabets 10 times.
*/

void print_alphabet_x10(void) {
	int lines;
	char letters;

	for (lines = 0; lines < 10; lines++)
	{
		for (letters = 'a'; letters < 'z'; letters++)
			_putchar(letters);
	}
}
