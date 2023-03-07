#include "main.h"
/**
 * _strcpy - copies a string including the terminating null byte
 * @dest: pointer to copy of string
 * @src: pointer to string to be copied
 * Return: pointer to copy of string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
		{
			dest[x] = dest[x] + '\0';
		}
	}
	return (dest);
}
