#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * description - a function that swaps the value of two integers
 * @a: pointer to first integer to be swapped
 * @b: pointer to second integer to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
