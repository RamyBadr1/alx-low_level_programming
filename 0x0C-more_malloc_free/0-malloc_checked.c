#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Return a pointer
* @b: int
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(sizeof(b));

	if (a == NULL)
		exit(98);

	return (a);
}
