#include "main.h"

/**
 *_abs - prints the absolute value of a number
 *@c: argumetn of the function
 *
 * Return: returns 0 if successful
 */

int _abs(int c)
{
	char ch;

	if (c >= 0)
	{
		ch = c + '0' ;
		_putchar(ch);
	}
	if (c < 0)
	{
		c = (c + 2 * c);
		ch = c + '0';
		_putchar(ch);
	}
	return (0);
}
