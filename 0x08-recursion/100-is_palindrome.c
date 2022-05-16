#include "main.h"
/**
 * find_length - finds length of string;
 * @s: string
 *
 * Return: length
 */

int find_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + find_length(s + 1));

}

/**
 * compare - compares characters of the string
 * @s: string
 * @i: integer for fisrt half of string
 * @c: integer for second half of string
 * @b: interger to hold 1 or 0
 *
 * Return: b
 */

int compare(char *s, int i, int c, int b)
{
	if (i == c || i - c == 1)
	{
		return (b);
	}
	else
	{
		if (s[i] == s[c])
		{
			b = 1;
		}
		else
		{
			b = 0;
			return (b);
		}
		return (compare(s, i + 1, c - 1, b));
	}
}
/**
 * is_palindrome - checks is string is a palindrome
 *@s: string
 *
 *Return: 0
 */

int is_palindrome(char *s)
{
	int b = 0;
	int length = find_length(s);

	if (length <= 1)
		return (1);
	return (compare(s, 0, length - 1, b));
}
