#include "main.h"

/**
 * print_last_digit - Function prototype
 * @n: The number to check
 * Description: Prints the last digit of a number
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = (n * -1) % 10;
	}
	_putchar(n + '0');

	return (n);
}
