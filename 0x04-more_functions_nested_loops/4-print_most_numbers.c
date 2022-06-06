#include "main.h"

/**
 *print_most_numbers - prints numbers from 0-9, excluding 2,4
 *
 */

void print_most_numbers(void)
{
	char i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			i++;

		_putchar(i);
	}
	_putchar('\n');
}
