#include <stdio.h>
/**
* main-Entry Point.
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	char chars;

	for (chars = 'z'; chars >= 'a'; chars--)
		putchar(chars);

	putchar('\n');

	return (0);
}
