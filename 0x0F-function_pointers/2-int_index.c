#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: pointer to array of values
 *@size: size of array to search for
 *@cmp: pointer to function that compares values
 *
 * Return: returns index if element is found, otherwise -1;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
