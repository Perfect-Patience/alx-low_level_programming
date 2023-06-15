#include "main.h"
/**
 *array_range -  creates an array of integers
 *@min: start value
 *@max: end value in range
 *
 * Return: pointer to range, otherwise NULL
 */


int *array_range(int min, int max)
{
	int *p;
	int i = 0;

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
