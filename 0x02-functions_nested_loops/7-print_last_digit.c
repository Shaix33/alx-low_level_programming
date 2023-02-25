#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * description - a function that prints the last digit of a number
 * @c: argument passed
 * Return: last digit of a number
 */
int print_last_digit(int c)
{
	int x;

	if (c < 0)
	{
		c = -c;
		x = c % 10;
	}
	if (x < 0)
	{
		x = -x;
		_putchar(x + '0');
	}
	return (x);
}
