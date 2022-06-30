#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function prototype
 * Description: Concatenates two strings
 * @s1: string 1
 * @s2: the string to be appended to s1
 * Return: A pointer to the newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int x;
	int y;
	char *m;

	if (s1 == 0)
		s1 = "\0";

	if (s2 == 0)
		s2 = "\0";

	for (x = 0; s1[x] != '\0'; x++)
	{
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
	}

	m = malloc((x + y) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (i = 0; i <= x + y; i++)
	{
		if (i < x)
			m[i] = s1[i];
		else
			m[i] = s2[i - x];
	}

	m[i] = '\0';

	return (m);
}
