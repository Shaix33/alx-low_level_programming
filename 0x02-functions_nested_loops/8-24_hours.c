#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * description - a function that prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int x, k;

	while (x < 24)
	{
		x = 0;
		while (k < 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(58);
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(10);
			k++;
		}
		x++;
	}
}
