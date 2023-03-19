#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to be converted
 * Return: integer representation of string
 */
int _atoi(char *s)
{
	int x = 0, a = 0, y = 0, z = 0, len = 0, num = 0;

	while (s[len] != '\0')

		len++;

	while (a < len && z == 0)
	{
		if (s[a] == '-')

			++y;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';

			if (y % 2)

				num = -num;
			x = x * 10 + num;
			z = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')

				break;

			z = 0;
		}
		a++;
	}
	if (z == 0)
		return (0);
	return (x);
}
