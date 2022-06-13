#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints opcode of main function
 *@argc: argumetn count
 *@argv: pointer to array of arguments
 *
 *Return:0.
 */

int main(int argc, char *argv[])
{
	char *opcode;
	int number_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (char *)main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i < number_of_bytes - 1)
			putchar(' ');
	}

	putchar ('\n');
	return (0);
}
