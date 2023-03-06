#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * description - a program that checks for a digit 0 throigh 9
 * @c: arguments passed, to be checked
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
