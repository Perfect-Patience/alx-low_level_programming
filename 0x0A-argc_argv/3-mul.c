#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiples argumnets to main function
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: 1 if argc is not 3 otherwise 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
