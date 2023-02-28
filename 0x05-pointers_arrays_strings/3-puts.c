#include "main.h"
/**
 * _puts - prints a string to stdout
 * description - a function that prints a string to stdout
 * @str: pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
