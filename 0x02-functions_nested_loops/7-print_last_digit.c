#include "main.h"

/**
 * print_last_digit - Function prototype
 * @n: The number to check
 * Description: Prints the last digit of a number
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)

		n = -n;

	x = n % 10;

	if (x < 0)

		x =  -x;

	_putchar(x % 10 + '0');
	return (x);
}
