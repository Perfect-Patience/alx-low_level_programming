#include <stdio.h>
/**
 *print_to_98- prints to 98 followed by a newline
 *@n: start integer
 */

void print_to_98(int n)
{
	int i = 98;

	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (; n > i; n--)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
