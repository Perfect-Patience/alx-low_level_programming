#include "main.h"
/**
 *find_len - finds length of string
 *@s: pointer to string
 *Return: length of s
 */

int  find_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *check_string - checks if string is a palindrome
 *@start: points to the current letter from left
 *@s: pointer to string
 *@end: points to the current letter from right
 *Return: 1 if s is a palindrome else, 0
 */

int check_string(int start, char *s, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_string(start + 1, s, end - 1));
}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s : string
 *Return: 1 if palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);

	len = find_len(s);
	return (check_string(0, s, len - 1));
}
