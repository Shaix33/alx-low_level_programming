#include "main.h"

/**
 * _abs - Function prototype
 * Description: Computes the absolute value of a number
 * @n: The number to find the absolute value of
 * Return: Absolute value of the number
 */
int _abs(int n)
{
	int x = n >= 0 ? n : n * -1;

	return (x);
}
