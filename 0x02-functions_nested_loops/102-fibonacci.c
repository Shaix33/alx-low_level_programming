#include <stdio.h>

/**
 * main - Program entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int i;
	long int x = 1;
	long int y = 2;
	long int z;
	long int max = 20365011074;

	for (i = 0; i < 50; i++)
	{
		if (x != max)
			printf("%ld, ", x);
		else
			printf("%ld\n", x);
		z = x + y;
		x = y;
		y = z;
	}

	return (0);
}
