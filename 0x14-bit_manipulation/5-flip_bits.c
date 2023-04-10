#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to get from number to another
 * @n: current
 * @m: next
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current, next = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = next >> x;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
