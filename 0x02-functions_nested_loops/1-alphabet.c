#include "main.h"

/**
 *main - prints the lower case alphabets.
 *
 *Return: returns zero
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
	return (0);
}
