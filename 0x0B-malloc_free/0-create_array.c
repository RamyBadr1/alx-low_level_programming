#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array
* @size: size of array
* @c: char to initalize
* Return: address to array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (size--)
		arr[size] = c;

	return (arr);
}
