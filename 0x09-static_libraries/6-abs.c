#include "main.h"
/**
 *_abs - finds the absolute value of an integer
 *@n: the parameter
 *
 *Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
