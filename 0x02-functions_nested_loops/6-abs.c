#include "main.h"

/**
 *_abs - prints the absolute value of a number
 *@c: argumetn of the function
 *
 * Return: returns absolute value if successful
 */

int _abs(int c)
{

	if (c >= 0)
		return (c);
	if (c < 0)
		return (c * -1);
}
