#include "main.h"
#include <stdio.h>


/**
 * _puts - a function that prints a string to stdout.
 * Description: prints a string to stdout flollowed by a new line
 * @str: string argument
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
 
