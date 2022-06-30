#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function prototype
 * Description: Returns a pointer to a new string that is a duplicate of
 * the string passed to it
 * @str: The string to be copied.
 * Return: A pointer to a newly allocated space in memory which contains
 * a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *str_out;
	int i;
	int x;

	if (str == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	str_out = (char *)malloc(sizeof(char) * (i + 1));

	if (str_out == 0)
		return (0);

	for (x = 0; x <= i; x++)
		str_out[x] = str[x];

	return (str_out);
}
