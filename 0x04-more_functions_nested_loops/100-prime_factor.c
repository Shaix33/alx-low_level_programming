#include <stdio.h>

/**
 * main - Program entry point
 * Description: Start with the square root of the number and work our way down
 * until we find the largest prime factor of the number 612852475143.
 * Return: void
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);

	return (0);
}
