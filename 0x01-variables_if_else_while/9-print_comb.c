#include <stdio.h>
/**
 * main - Entry point
 * description - prints all possible combinations of single-digit numbers
 * Return: void
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
