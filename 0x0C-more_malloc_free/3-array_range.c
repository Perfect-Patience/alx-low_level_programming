#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: start value
 *@max: end value
 *Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
