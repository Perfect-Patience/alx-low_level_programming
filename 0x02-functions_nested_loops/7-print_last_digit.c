#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@n: integer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n *= -1;
	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
