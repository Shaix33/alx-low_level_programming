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

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			p = r * c;
			if (c == 0)
				_putchar('0');

			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p % 10 + '0');
			}
			else if (p < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) % 10 + '0');
				_putchar(p % 10 + '0');
			}
			else if (p < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 100 + '0');
				_putchar((p / 10) % 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
