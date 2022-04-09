#include <stdio.h>

/**
 *main - prints numbers 0 to 9
 *
 *Return: Success
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{

		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
