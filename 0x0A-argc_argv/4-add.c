#include <stdio.h>
#include <stdlib.h>

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
	for (i = 1; i < argc; i++)
	{ 
		if (*argv[i] == '0')
			j = 0;
		else
		{
			j = atoi(argv[i]);

			if (j == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += j;
	}
	printf("%d\n", sum);

	return (0);
}
