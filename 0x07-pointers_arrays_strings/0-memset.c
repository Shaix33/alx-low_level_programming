#include "main.h"

/**
 * _memset - fills the first bytes of memory pointed to by s
 * description - fills memory with a constant byte
 * @s: pointer to be dereferenced
 * @n: bytes to be filled
 * @b: constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > '\0'; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
