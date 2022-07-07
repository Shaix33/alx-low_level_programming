#include "main.h"

/**
 * rot13: Function prototype
 * @src: pointer to the string to encode
 * Description: encodes a string using rot13, replacing a character with the 13th letter after  * it
 * Return: pointer to encoded src
 */

char *rot13(char *src)
{
	int x, c;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; src[x]; x++)
	{
		for (c = 0; c < 54; c++)
		{
			if (((src[x] > 'z' || src[x] < 'a') && (src[x] > 'Z' || src[x] < 'A'))
					|| src[x] != alphabet[c])
				continue;

			src[x] = rot13[c];
			break;
		}
	}
	return (src);
}
