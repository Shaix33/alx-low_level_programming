#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function prototype
 * Description: Concatenates
 * @ac: The number of arguments
 * @av: Array of strings
 * Return: A pointer to a string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, x, z, cmpt;

	if (ac == 0)
		return (0);

	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == 0)
			return (0);

		for (z = 0; av[i][z] != '\0'; z++)
			x++;
		x++;
	}

	s = malloc((x + 1) * sizeof(char));

	if (s == 0)
	{
		free(s);
		return (0);
	}

	for (i = z = cmpt = 0; cmpt < x; z++, cmpt++)
	{
		if (av[i][z] == '\0')
		{
			s[cmpt] = '\n';
			i++;
			cmpt++;
			z = 0;
		}
		if (cmpt < x - 1)
			s[cmpt] = av[i][z];
	}
	s[cmpt] = '\0';

	return (s);
}
