#include "main.h"

/**
 * _strcmp - Function prototype
 * Description: Compares the difference between the strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The difference between the two strings. 0 if a match
 * and another number if not
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
return (0);
}
