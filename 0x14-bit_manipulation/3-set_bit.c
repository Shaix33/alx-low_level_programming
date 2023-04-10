#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to number to convert
 * @index: index
 * Return: 1 Success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
