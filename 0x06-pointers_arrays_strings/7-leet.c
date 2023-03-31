#include "main.h"
/**
 * leet - encode
 * @n: string to be encoded 
 * Return: encoded string
 */
char *leet(char *n)
{
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";
	int i, x;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; str1[x] != '\0'; x++)
		{
			if (n[i] == str1[x])
				n[i] = str2[x];
		}
	}

	return (n);
}

