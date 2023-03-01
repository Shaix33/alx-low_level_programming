#include "main.h"

/**
 * _strncpy - Function prototype
 * Description: Copies the first n characters of the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed to by dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the string to be copied
 * @n: Number of bytes to copy
 * Return: The pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
