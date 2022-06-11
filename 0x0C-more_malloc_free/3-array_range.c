#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of values from min to max
 *@min: first element of the array
 *@max: last element of the array
 *
 *Return: returns pointer to array, otherwise null.
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, n;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (n = min; n <= max; n++)
	{
		p[i] = n;
		i++;
	}
	return (p);
}
