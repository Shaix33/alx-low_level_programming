#include "main.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}
