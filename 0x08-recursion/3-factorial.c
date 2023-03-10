#include "main.h"
/**
 *factorial - finds the factorial of positve numbers
 *@n: integer
 *Return: 1 if n is 1 or 0, -1 if n < 0, otherwise, factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
