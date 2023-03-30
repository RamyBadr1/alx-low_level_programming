#include <string.h>
#include "main.h"

/**
* *_strncat - concatenate 2 strings.
* @dest: the dest string.
* @src: the src string.
* @n: the number of a chars.
* Return: the conactenated string.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
