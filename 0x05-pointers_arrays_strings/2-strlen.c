#include "main.h"
/**
 *_strlen - finds the length of a string.
 *@s: pointer of type char.
 *
 * Return: retuens length of srting.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
