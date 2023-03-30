#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* cap_string - captilize given string.
* @str: string to be capitalized.
* Return: a capitalized string.
*/
char *cap_string(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] = toupper(str[i]);
	}
	return (str);
}
