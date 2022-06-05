#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}

	putchar('\n');

	return (0);
}
