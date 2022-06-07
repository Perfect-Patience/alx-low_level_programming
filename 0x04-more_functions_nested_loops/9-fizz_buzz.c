#include <stdio.h>
/**
 *main - FizzBuzz test, Prints numbers from 1 to 100
 *Replacing all multiples of 3 with "Fizz" and multiples of 5 with "Buzz"
 *and multiples of both with "FizzBuzz"
 *
 * Return: 0, success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	return (0);
}
