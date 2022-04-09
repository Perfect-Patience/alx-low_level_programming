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

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
