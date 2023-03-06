#include "main.h"

/**
 * _isupper - Checks for an uppercase
 * description - checks for an uppercase character
 *
 * @c: Character to check for
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
