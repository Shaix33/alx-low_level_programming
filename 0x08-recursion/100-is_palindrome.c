#include "main.h"
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be evaluated
 * Return: 1 if string is palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen(s)));
}
/**
 * _strlen - reverses a string to check if string is palindrome
 * @s: string to be evaluated
 * Return: 1 if string is palindrome 0 if not
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * check_palindrome - iterates over string characters to check if it matches
 * @s: string to be evaluated
 * @x: counter variable
 * @len: string length
 * Return: 1 if string is palindrome 0 if not
 */
int check_palindrome(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
	{
		return (0);
	}
	if (x >= len)
	{
		return (1);
	}
	return (check_palindrome(s, x + 1, len - 1));
}
