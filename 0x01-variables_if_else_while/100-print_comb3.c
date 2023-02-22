#include <stdio.h>
/**
 * main - Entry point
 * description - prints a combination of 2 numbers
 * Return: void
 */
int main(void)
{
	int x, i;

	for (x = '0'; x < '9'; x++)
	{
		for (i = x + 1; i <= '9'; i++)
		{
			if (i != x)
			{
				putchar(x);
				putchar(i);

			if (x == '8' && i == '9')
				continue;

			putchar(44);
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
