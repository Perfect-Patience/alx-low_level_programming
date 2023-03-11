#include "main.h"
/**
 *prime_num - determines if a number is prime.
 *@n: number being checked
 *@i: posible factor of n
 *Return: 1 if prime, otherwise 0
 */
int prime_num(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (i > n / 2)
		return (1);
	return (prime_num(n, i + 1));
}

/**
 *is_prime_number - determines whether a number is prime.
 *@n : integer
 *Return: 1 if n is prime, otherwise 0;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, 2));
}
