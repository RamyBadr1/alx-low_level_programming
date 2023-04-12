#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* str_concat - concatenate 2 strings
* @s1: 1st string
* @s2: 2nd string
* Return: address to new string
*/
char *str_concat(char *s1, char *s2)
{
	char *newS;
	int i, size1, size2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	newS = malloc(sizeof(char) * (size1 + size2) + 1);

	if (newS == NULL)
		return (NULL);

	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			newS[i] = s1[i];
		else
			newS[i] = s2[i - size1];
	}

	newS[i] = '\0';

	return (newS);
}
