#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds arguments to the program
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1 if arguments contain a non-digit symbols, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
		sum = 0;
	else
	{
		for (i = 1; i < argc; i++)
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
	}
	printf("%d\n", sum);
	return (0);
}
