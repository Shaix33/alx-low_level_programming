#include "main.h"

/**
 * print_line - prints _ n times
 * Description: prints an underscore a number of times specified by n
 * @n: number of times to print
 * Return: void
 *
 */

void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		for (; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
