#include <stdio.h>

/**
 * main - Program entry point
 * Description: Computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int i;
	int x = 0;

	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			x += i;
	}

	printf("%i\n", x);

	return (0);
}
