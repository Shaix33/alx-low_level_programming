#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * description - a function that takes a value and returns its abs
 * @c: argument passed
 * Return: absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
		return (c * -1);
	
}
