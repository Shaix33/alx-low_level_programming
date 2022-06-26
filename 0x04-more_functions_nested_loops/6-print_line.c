#include "main.h"

/**
 * print_line - Function prototype
 * Description: Prints a line of underscores
 * @n: the number of times to print the character _
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
