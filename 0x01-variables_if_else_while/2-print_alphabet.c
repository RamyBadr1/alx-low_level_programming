#include <stdio.h>
#include <string.h>
/**
 * main-Entry Point.
 *
 * Return: Always 0 (SUCCESS)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);

	printf("\n");

	return (0);
}
