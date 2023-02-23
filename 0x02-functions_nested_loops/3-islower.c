#include "main.h"
/**
 * _islower - checks for a lowercase character
 * description - a function that checks for a lowercase character
 * @c: argument passed
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	char x;
	int ret;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			ret = 1;
			return (ret);
		}
		else
		{
			ret = 0;
		}
	}
	return (ret);
}
