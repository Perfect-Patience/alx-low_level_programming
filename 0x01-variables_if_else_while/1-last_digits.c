#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - finds last digit of a number
 *
 * Reaturn: zero
 */

int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int mod = n%10;

	if (mod < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n mod);
	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5 and not 0\n", n mod);
	if (mod == 0)
		printf("Last digit of %d is %d and is 0", n mod);
	return (0);
}
