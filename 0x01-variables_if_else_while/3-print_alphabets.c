#include <stdio.h>

/**
 *main - prints alphabeths in upper and lower cases
 *
 *Return: successful run - zero
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
