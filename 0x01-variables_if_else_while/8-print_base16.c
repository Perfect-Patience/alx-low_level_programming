#include <stdio.h>
/**
 *main - prints hexedecimals
 *
 * Return: success zero
 */

int main(void)
{
	char hex;

	for (hex = '0x00'; hex <= '0x0f'; hex ++)
		putchar(hex);
	putchar('\n');
	return (0);
}
