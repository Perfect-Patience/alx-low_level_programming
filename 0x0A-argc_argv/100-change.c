#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins
 * to make change for an amount of money
 *@argc: argumnet count
 *@argv: array of arguments
 *
 * Return: 0-succes
 */

int main(int argc, char *argv[])
{
	int amount, i, change = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (amount >= cent[i])
		{
			amount -= cent[i];
			change++;
		}

		if (amount == 0)
			break;
	}
	printf("%d\n", change);
	return (0);
}
