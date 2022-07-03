#include "main.h"

/**
 * print_number - Function prototype
 * Description: Prints an integer.
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int x, y, c;

	if (n >= 0)
	{
		x = n;
	}
	else
	{
		_putchar(45);
		x = n * -1;
	}

	y = x;
	c = 1;

	while (y > 9)
	{
		y /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
		_putchar(((x / c) % 10) + 48);
}
