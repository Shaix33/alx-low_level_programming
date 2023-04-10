#include "main.h"
/**
 * get_endianness - checks the order in which the sequence of bytes is stored
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
