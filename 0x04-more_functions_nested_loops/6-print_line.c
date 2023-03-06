#include "main.h"

/**
 * print_line - draws a line in the terminal
 * description - a function that draws a line n number of times in the terminal
 * @n: Number of times line should be drawn
 *
 * Return: void
 */

void print_line(int n)
{
	int x;
	char c = '_';

	if (n < 0 && n == 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		_putchar(c);
	}
	_putchar('\n');
}



