#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0, otherwise 1 if input isn't a digit
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0, j;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
