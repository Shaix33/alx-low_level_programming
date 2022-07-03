#include "main.h"

/**
 * _strcat - Function prototype
 * Description: Concatenates two strings.
 * @dest: Pointer to the destination array, which should be large
 * enough to contain the concatenated resulting string
 * @src: Pointer to the null-terminated string to be appended to dest
 * Return: The pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i = -1;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	do {
		i++;
		dest[x] = src[i];
		x++;
	} while (src[i] != '\0');

	return (dest);
}
