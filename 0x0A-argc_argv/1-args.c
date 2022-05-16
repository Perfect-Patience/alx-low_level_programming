#include <stdio.h>
#include "main.h"

/**
 *main - prins numebr of arguments passed to the program
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char UNUSED * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
