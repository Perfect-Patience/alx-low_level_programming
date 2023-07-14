#include "main.h"
/**
 *binary_to_uint - converts binary to decimal using left shift operator
 *@b: pointer to string of 0s and 1s
 *
 *Return: value in base 10;
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int power;

	if (b)
	{
		for (power = 0; b[power] != '\0'; power++)
		{
			if (b[power] != '1' && b[power] != '0')
				return (0);
			result += (b[power] - '0') * (1 << (power));
		}
	}
	return (result);
}
