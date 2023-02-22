#include "main.h"
/**
 *print_sign - prints sign of an integer
 *@n: integer
 *
 *Return: 1 if positive, -1 if negatve and 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
