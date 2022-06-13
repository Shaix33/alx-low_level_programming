#include "main.h"

/**
 * swap_int - swap the value of two integers
 * Description: Takes two integers as arguments and swaps their values
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;


}
