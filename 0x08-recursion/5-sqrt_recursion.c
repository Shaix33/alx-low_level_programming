#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 * Return: -1 if number doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (natural_square(n, 0));
	}
}
/**
 * natural_square - recurses to find natural square root
 * @n: number to be evaluated
 * @x: counter
 * Return: result
 */
int natural_square(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (natural_square(n, x + 1));
}
