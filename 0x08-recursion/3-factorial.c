#include "main.h"

/**
 *factorial - finds factorial of a number
 *@n: integer
 *
 * Return: -1 if n is negative else returns factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
