#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* string_toupper - change string chars to uppercase.
* @str: a string to change.
* Return: an uppercase string.
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (i < strlen(str))
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
