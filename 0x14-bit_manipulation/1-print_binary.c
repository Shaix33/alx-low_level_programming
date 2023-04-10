#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: void (Success)
 */
void print_binary(unsigned long int n)
{
	int x, counter = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
