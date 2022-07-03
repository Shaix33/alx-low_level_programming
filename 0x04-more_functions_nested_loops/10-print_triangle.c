#include "main.h"

/**
 * print_triangle: function prototype
 * Description: prints a triangle the size of size followed by a new line
 * @size: size of the triangle
 *
 * Return void
 */

void print_triangle(int size)
{
	int x,y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x < size; x++)
	{
		for (y = 1; y < size; y++)
		{
			if (y <= (size - x))

				_putchar(' ');
			else

				_putchar('#');
		}
		_putchar('\n');
	}
}
