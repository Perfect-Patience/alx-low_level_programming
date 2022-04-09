#include <stdio.h>
/**
 *main - prints hexedecimals
 *
 * Return: success zero
 */

int main(void)
{
	int hex;

	for (hex = 0x00; hex <= 0x0f; hex ++)
		putchar((char) hex);
	putchar('\n');
	return (0);
}
