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
	int length = 0;

	if (b)
	{
		while(b[length])
			length++;

		for (length; length != 0; length--)
		{
			if (b[length] != '1' && b[length] != '0')
				return (0);
			result += (b[length] - '0') * (1 << (length - 1));
		}
	}
	return (result);
}
