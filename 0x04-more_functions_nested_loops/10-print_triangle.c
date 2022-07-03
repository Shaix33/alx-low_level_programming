#include "main.h"

/**
 * print_triangle - Function prototype
 * Description Print a triangle of size `size` using `#` characters
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, x, n = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; i < size; i++)
		{
			for (x = 0; x < size; x++)
				_putchar(x < n ? ' ' : '#');

			n--;
			_putchar('\n');
		}
	}
}
