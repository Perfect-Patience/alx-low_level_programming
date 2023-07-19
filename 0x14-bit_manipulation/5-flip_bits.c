#include "main.h"
/**
 *flip_bits - returns the number of bits needed to flip
 *to get from one number to another
 *@n: number 1
 *@m: number 2
 *
 * Return: the number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
