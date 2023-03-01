#include "main.h"
/**
 *puts_half - prints second half of a string
 *@str: pointer to string
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
