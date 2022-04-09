#include <stdio.h>

/**
 *main - prints numbers less than 0
 *
 *Return: zero - success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((char) i);
	putchar('\n');
	return (0);
}
