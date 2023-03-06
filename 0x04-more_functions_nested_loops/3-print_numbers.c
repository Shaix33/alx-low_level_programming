#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9 followed by a new line
 * description - prints numbers 0 through 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
