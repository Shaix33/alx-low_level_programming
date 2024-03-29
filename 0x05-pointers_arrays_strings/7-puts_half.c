#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0, i;

	while (str[x] != '\0')
	{
		x++;
	}

	if ((x % 2) == 0)
	{
		i = x / 2;
	}
	else
	{
		i = (x + 1) / 2;
	}
	while (i < x)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
