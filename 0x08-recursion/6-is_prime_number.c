#include "main.h"

/**
 *check_division - checks if n has divisors
 *@n: integer n
 *@i: value representing divisor
 *
 * Return: 1 if n is prime else 0
 */

int check_division(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (check_division(n, i + 1));
}
/**
 *is_prime_number - returns 1 if input is a prime number
 *@n: integer as input
 *
 * Return: results from check_division function
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_division(n, 2));
}
