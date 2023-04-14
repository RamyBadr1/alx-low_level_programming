#include "main.h"

/**
* array_range - return a pointer to a new array.
* @min: int
* @max: int
* Return: return a pt to a new array
*/
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
