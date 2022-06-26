#include "main.h"

/**
 * print_most_numbers - Function prototype
 * Description: Prints the numbers, from 0 to 9 except for 2 and 4
 * followed by a new line
 * Return: void
 */
void print_most_numbers(void)
{
	int x = '0';

	for (; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}

	_putchar('\n');
}
