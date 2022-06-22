#include "main.h"

/**
 * print_times_table - Function prototype
 * Description: Prints the times table of a given number
 * as long as that number is between 0 and 15
 * @n: The number of times table to print
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n < 0 || n >= 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0');

			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c % 10 + '0');
			}
			else if (c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (c < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
