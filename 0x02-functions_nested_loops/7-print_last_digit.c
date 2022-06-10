#include "main.h"

/**
 * print_last_digit - Function prototype
 * @n: The number to check
 * Description: Prints the last digit of a number
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
