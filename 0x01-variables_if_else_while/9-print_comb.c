#include <stdio.h>
/**
* main-Prints from 0 to 9.
*
* Return: Always 0 (SUCCESS).
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 57)
		{
			putchar(i);
			printf(", ");
		} else
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}

