#include <stdio.h>
/**
 * main - Entry point
 * description - prints all possible different combinations of 2 digits
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != 99)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
