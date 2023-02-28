#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x)
	{
		_putchar(s[--x]);
	}
	_putchar('\n');
}
