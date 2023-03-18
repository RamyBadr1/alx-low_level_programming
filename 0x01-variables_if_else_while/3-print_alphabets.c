#include <stdio.h>
/**
 * main-Entry Point.
 *
 * Return: Always 0 (SUCCESS)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	printf("\n");

	return (0);
}
