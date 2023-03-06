#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * description - a program that draws a diagonal line on the terminal
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		for (j = 0; j < x; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}

