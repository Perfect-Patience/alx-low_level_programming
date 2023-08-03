#include "main.h"
/**
 *get_bit - gets value of bit at given index
 *@n: number
 *@index: index of bit
 *
 * Return: value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, one = 1;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = one << index;
	bit_value = (n & mask) != 0;

	return (bit_value);
}
