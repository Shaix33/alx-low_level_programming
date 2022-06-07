#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints all possible combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int max = 100;

	for (x = 0; x < max ; x++)
	{
		for (y = x + 1 ; y < max; y++)
		{
			putchar (x / 10 + '0');
			putchar (x % 10 + '0');
			putchar (' ');

			putchar (y / 10 + '0');
			putchar (y % 10 + '0');

			if (x == 98 && y == 99)
				break;

			putchar(',');
			putchar (' ');

		}

	}

	putchar('\n');

	return (0);
}
