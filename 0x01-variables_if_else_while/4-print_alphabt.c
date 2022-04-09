#include<stdio.h>

/**
 *main - prints alphabeths except e and q
 *
 * Return: success zero
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
