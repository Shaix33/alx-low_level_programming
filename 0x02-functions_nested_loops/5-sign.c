#include "main.h"

/**
 * print_sign - Function prototype
 * Description: Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 if positive, 0 if equals to 0 otherwise -1
 */
int print_sign(int n)
{
	int x;
	char y;

	if (n <= 0)
	{
		if (n == 0)
		{
			x = 0;
			y = '0';
		}
		else
		{
			x = -1;
			y = '-';
		}
	}
	else
	{
		x = 1;
		y = '+';
	}

	_putchar(y);

	return (x);
}
