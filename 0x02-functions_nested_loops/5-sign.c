#include "main.h"
/**
 * print_sign - prints out a sign if a condition is met
 * description - a function that prints a different sign given a condition
 *
 * @n: number to be checked
 * Return: 1 if greater, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
