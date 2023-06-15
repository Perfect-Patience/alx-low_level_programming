#include "main.h"
/**
 *alloc_grid - returns a pointer to a 2D array
 *@width: width of array
 *@height: height of array
 *Return: pointer to 2D array. else NULL
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(*p) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(p[i]) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
