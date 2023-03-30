#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

char *cap_string(char * str)
{
	int i;
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
