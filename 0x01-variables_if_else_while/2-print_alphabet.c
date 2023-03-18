#include <stdio.h>
#include <string.h>
/**
 * main-Entry Point.
 *
 * Return: Always 0 (SUCCESS)
*/
int main(void) {
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < strlen(alphabet); i++)
		putchar(alphabet[i]);

	return (0);
}
