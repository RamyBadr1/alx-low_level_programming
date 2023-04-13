#include "main.h"
#include <stdlib.h>

/**
* alloc-grid - return a pointer to a 2d array
* @width: int
* @height: int
* Return: a pointer to 2d array
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	arr = malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);
	
	for(i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
