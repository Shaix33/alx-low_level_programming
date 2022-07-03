#include "main.h"

/**
 * print_square - Function prototype
 * Description: Prints a square of the specified size
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
