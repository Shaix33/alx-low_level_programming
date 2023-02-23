#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * description - a function that checks for alphabetic character
 * @c: arguments passed
 * Return: 1 if c is an alphabet 0 otherwise
 */
int _isalpha(int c)
{
	char x, y;
	int ret;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 'A'; y <= 'Z'; y++)
		{
			if (c == x || c == y)
			{
				ret = 1;
				return (ret);
			}
			else
			{
				ret = 0;
			}
		}
	}
	return (ret);
}
