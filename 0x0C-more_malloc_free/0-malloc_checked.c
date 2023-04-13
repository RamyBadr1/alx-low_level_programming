#include "main.h"

/**
* malloc_checked - Return a pointer
* @b: int
* Return: address or void
*/
void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
