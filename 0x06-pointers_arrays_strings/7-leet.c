#include "main.h"

/**
 * leet - Function prototype
 * Description: Encodes a string into 1337, replaces all the letters
 * a, e, o, t, and l with the numbers 4, 3, 0, 7, and 1 respectively
 * @str: The string to encode
 * Return: Pointer to the str
 */
char *leet(char *str)
{
	int i;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i]; i++)
	{
		int x;

		for (x = 0; x < 5; x++)
		{
			if (str[i] != lower[x] && str[i] != upper[x])
				continue;

			str[i] = num[x];
			break;
		}
	}

	return (str);
}
