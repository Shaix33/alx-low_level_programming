#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9 except 2 and 4
 * description - prints numbers 0-9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; ++i)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
