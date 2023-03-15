#include "main.h"
/**
 *alloc_grid - returns a pointer to a 2D array
 *@width: width of array
 *@height: height of array
 *Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
