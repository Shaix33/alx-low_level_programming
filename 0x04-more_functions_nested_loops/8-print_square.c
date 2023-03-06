#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * description - a function that prints a a square to the terminal
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int x, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);

			}
			_putchar('\n');
		}
	}
}

