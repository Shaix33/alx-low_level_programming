#include "main.h"

/**
 * _islower - Function prototype
 * Description: Checks if a character is lowercase.
 * @c: The ascii character to be checked
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	int result = c >= 97 && c <= 122 ? 1 : 0;

	return (result);
}
