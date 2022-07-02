#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Description: prints character \ n times to the terminal to create a diagonal
 * @n: number of times to print character \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n <= 0)	
		_putchar('\n');

	else
	{
		for (; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
			}
		}
	}
}

