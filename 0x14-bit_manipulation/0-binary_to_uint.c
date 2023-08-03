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
	int length = 0, i, pow = 0;

	if (b)
	{
		while (b[length])
			length++;

		i = length - 1;
		for (; i >= 0;  i--)
		{
			if (b[i] != '1' && b[i] != '0')
				return (0);
			result += (b[i] - '0') * (1 << pow);
			pow++;
		}
	}
	return (result);
}
