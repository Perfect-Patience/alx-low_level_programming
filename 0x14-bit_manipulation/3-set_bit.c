#include "main.h"

/**
 *set_bit - sets bit at a particular index
 *@n: pointer to the number to modify
 *@index: position to change
 *
 *Return: 1 else -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, one = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = one << index;
	*n = *n | mask;

	return (1);
}
