#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - prints array
* @array: an array to be printed
* @size: size of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < (int) size; i++)
			(*action) (array[i]);
	}
}
