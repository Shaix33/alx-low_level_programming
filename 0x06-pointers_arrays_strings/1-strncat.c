#include "main.h"

/**
 * _strncat - Function prototype
 * Description: Concatenates two strings.
 * @dest: Pointer to the destination array, which should be large enough
 * to contain the concatenated resulting string
 * @src: Pointer to the null-terminated string to be appended to dest
 * @n: number of bytes to be appended
 * Return: The pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	for (x = 0; dest[x]; x++)
	{
	}

	for (i = 0; i < n && dest[i]; i++)
	{
		dest[i + x] = src[i];
	}

	dest[i + x] = '\0';

	return (dest);
}
