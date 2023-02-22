#include "main.h"
/**
 *print_alphabet_x1 - prints the lowercase letters 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i < 11; i++)
	{
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
