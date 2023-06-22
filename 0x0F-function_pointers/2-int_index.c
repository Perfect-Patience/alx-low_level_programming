#include "function_pointers.h"
/**
 *int_index - returns the index of the first element for
 *which the cmp function does not return 0
 *@array: array of integers
 *@size: size of array
 *@cmp: pointer to comparinson function
 *
 * Return: index of found element, else -1;
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result == 1)
				return (i);
		}
	}
	return (-1);
}
