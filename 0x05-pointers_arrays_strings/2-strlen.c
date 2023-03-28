#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen - return the length of a string.
* @s: the string that should be lengthed.
* Return: length of a string as an integer.
*/
int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return count;
}
