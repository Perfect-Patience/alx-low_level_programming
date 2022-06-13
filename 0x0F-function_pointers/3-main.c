#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - calls function to perform matematical operation
 *@argc: argument count
 *@argv: array of arguments
 *
 * Return: 0.
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}

