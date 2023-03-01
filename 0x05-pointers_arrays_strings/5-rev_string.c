#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0, z = 0;
	char str = s[0];

	while (s[x] != '\0')
		x++;
	for (z = 0; z < x; z++)
	{
		x--;
		str = s[z];
		s[z] = s[x];
		s[x] = str;
	}
}


