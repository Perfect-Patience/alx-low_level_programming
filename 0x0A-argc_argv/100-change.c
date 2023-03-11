#include <stdio.h>
#include <stdlib.h>
/**
 *main - pritns the minimum number of coins to make change
 *@argc: number of arguments
 *@argv: pointer to arguments
 *Return: 0, or 1 if error occurs
 */

int main(int argc, char **argv)
{
	int i, change = 0, amount;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	for (i = 0; i <= 4; i++)
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
