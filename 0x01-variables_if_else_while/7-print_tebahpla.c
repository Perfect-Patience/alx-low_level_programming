#include <stdio.h>

/**
 *main - prints letters z to a
 *
 *Return: zero
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
