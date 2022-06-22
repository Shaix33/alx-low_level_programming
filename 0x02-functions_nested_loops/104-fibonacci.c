#include <stdio.h>

/**
 * main - Program entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, c, b1, b2, c1, c2;
	unsigned long int max = 1000000000;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c += b;
		b = c - b;
	}

	b1 = b / max;
	b2 = b % max;
	c1 = c / max;
	c2 = c % max;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", c1 + c2 / max);
		printf("%lu", c2 % max);
		c1 += b1;
		b1 = c1 - b1;
		c2 += b2;
		b2 = c2 - b2;
	}

	printf("\n");
	return (0);
}
