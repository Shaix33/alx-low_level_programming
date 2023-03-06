#include "main.h"

/**
 * print_number - prints an integer
 * description - function that prints an integer
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');

}
