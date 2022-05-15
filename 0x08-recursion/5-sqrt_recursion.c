#include "main.h"

/**
 *find_square_root - returns natural square root of n
 *@n: integer
 *@i: initial guess
 *
 * Return: returns natural square root else -1
 */
int find_square_root(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (find_square_root(n, i++));
}
/**
 *_sqrt_recursion - finds the square Root of input
 *@n: integer
 *
 *Return: -1 if less than 0, 0 or 1 if either, otherwise square root of n
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_square_root(n, 2));
}
