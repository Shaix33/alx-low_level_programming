#include "main.h"

/**
 * times_table - Function prototype
 * Description: Prints the times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 9; y++)
		{
			int a = x * y;
			int b = a / 10;
			int c = a % 10;

			if (y != 0)
			{
				if (a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(b + '0');
					_putchar(c + '0');
				}
			}
			else
			{
				_putchar('0');
			}
		}

		_putchar('\n');
	}
}
