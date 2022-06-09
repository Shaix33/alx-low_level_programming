#include "main.h"

/**
 * _isalpha - Function prototype
 * Description: Checks if a character is a letter
 *
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	int result = (c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0;

	return (result);
}
