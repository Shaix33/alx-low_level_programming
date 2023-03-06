#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * description - a program that prints numbers 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
