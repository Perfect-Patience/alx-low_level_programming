#include "main.h"

/**
 *print-alphabet - prints the lower case alphabets.
 *
 */

void print_alphabet(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
}
