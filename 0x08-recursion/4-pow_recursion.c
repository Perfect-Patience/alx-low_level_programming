#include "main.h"
/**
 *_pow_recursion - finds thwe values of x raised to
 * the power  y
 *@x : integer
 *@y: exponential integer
 *
 * Return: y raised to the power y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
