#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * description - a function that encodes a string using rot13
 *
 * @s: pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
	int x, y;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == str[y])
			{
				s[x] = str1[y];
				break;
			}
		}
	}
	return (s);
}
