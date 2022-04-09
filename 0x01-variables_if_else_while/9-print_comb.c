#include <stdio.h>

/**
 *main - prints numbers 0 to 9
 *
 *Return: Success
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{

		putchar((char) ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
