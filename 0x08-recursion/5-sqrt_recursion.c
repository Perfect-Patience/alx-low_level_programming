#include "main.h"
/**
 *find_sqrt - finds square root of n using recursion
 *@k : odd number repeated subtracted from n
 *@n : integer
 *
 * Return: square root of n, otherwise -1
 */

int find_sqrt(int k, int n)
{
	if (k * k == n)
		return (k);
	if (k > n / 2)
		return (-1);
	return (find_sqrt(k + 1, n));
}


/**
 *_sqrt_recursion - finds the square root of n
 *@n : integer
 *Return: 0 if n is 0, -1 if n < 0, otherwise square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (find_sqrt(1, n));
}
