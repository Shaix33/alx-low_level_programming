#include "main.h"

/**
 * _memcpy - A function that copies memory
 * @dest: to be copied to
 * @src: to be copied from
 * @n: Number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
