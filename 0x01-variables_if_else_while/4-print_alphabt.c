#include <stdio.h>
/**
 * main-Entry Point.
 *
 * Return: Always 0 (SUCCESS)
*/
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars == 'e' || chars == 'q')
			continue;

		putchar(chars);
	}

	printf("\n");

	return (0);
}
