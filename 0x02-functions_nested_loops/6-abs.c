#include "main.h"

/**
 *_abs - prints the absolute value of a number
 *@c: argumetn of the function
 *
 * Return: returns 0 if successful
 */

int _abs(int c)
{
	if (c >= 0)
		_putchar(char(c));
	if (c < 0)
	{
		c = (c + 2 * c);
		_putchar(c + '0');
	}
	return (0);
