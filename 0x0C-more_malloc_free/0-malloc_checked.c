#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Return a pointer
* @b: int
*/
void *malloc_checked(unsigned int b)
{
	int *a = malloc(sizeof(b));

	if (a == NULL)
		exit(98);

	return (a);
}
