#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - iterates through elemens in an array.
 *@array: pointer to the array
 *@size: lenght of the array
 *@action: pointer to another fuction.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size > 0 && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
