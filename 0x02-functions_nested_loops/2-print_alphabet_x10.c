#include "main.h"
/**
 *print_alphabet_x10 - prints the lowercase letters 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 1; i < 11; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
	}
}
