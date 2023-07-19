#include "main.h"
/**
 *get_endianness - checks endianness
 *
 *Return: ) if big endian and 1 if small endian
 */


int get_endianness(void)
{
	unsigned int value = 1;
	char *p;

	p = (char *) &value;

	return ((int) *p);
}
