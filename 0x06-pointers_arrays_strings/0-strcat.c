#include "main.h"
#include <string.h>

/**
* *_strcat - concatenate 2 strings .
* @dest: the destination string .
* @src: the source string .
* Return: the concatenated string .
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
