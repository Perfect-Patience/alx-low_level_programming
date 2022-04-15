#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; 1 < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
