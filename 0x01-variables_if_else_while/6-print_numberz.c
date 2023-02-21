#include <stdio.h>
/**
 * main - Entry point
 * description - prints base 10 numbers
 * Return: void
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
