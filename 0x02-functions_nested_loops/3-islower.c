#include "main.h"
/**
 * _islower - checks for lowercase character
 * description - a function that checks for a lowercase character
 * @c: argument passed
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	char x;
	int y;

	for (x = 'a'; c <= 'z'; x++)
	{
		if (x == c)
		{
			y = 1;
		}
		else
		{
			y = 0;
		}
		return (y);
}
