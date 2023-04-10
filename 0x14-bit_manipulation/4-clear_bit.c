#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: number to be converted
 * @index: index
 * Return: 1 Success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
