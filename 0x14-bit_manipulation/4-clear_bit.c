#include "main.h"
/**
 *clear_bit - sets the value of bit to 0 at given index
 *@n: pointer to value
 *@index: index to clear
 *
 * Return: 1 or -1 if function fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, one = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = one << index;

	*n &= ~mask;

	return (1);
}
