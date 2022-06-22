#include <stdio.h>

/**
 * main - Program entry point
 * Description: Finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int x = 1;
	int y = 0;
	int z;
	int max = 4000000;

	while (i < max)
	{
		i = x + y;
		x = y;
		y = i;

		if (i % 2 == 0)
			z += i;
	}

	printf("%i\n", z);

	return (0);
}
