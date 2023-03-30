#include "string.h"
#include "main.h"

/**
* *_strncpy - copies string.
* @dest: the dest.
* @src: the src.
* Return: copied string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
