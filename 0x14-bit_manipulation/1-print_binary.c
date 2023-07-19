#include "main.h"
/**
 *print_binary - prints binary forn of a number
 *@n: number to ne converted
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, one = 1;
	int significant_bit_encountered = 0;

	if (n == 0)
	{
		_putchar('0');
	return;
	}

	mask = one << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			significant_bit_encountered = 1;
		}
		else if (significant_bit_encountered)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
