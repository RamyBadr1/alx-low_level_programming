#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _strdup - duplicate a string
* @str: a string to be dublicated.
* Return: a dublicated string or null
*/
char *_strdup(char *str)
{
	char *s = malloc(sizeof(int) * sizeof(str) + 1);
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(s + i) = *(str + i);

	return (s);
}
