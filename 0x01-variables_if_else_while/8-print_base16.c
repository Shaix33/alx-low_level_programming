#include <stdio.h>
/**
 * main - Entry point
 * description - prints base16 numbers
 * Return: void
 */
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
