#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to 2D array of integers
 *@width: number of columns
 *@height: number of rows
 *
 *Return: pointer to 2D array otherwise, NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int) * width);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * height);

		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
