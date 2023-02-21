#include <stdio.h>
/**
 * main - Entry point
 * description - prints the lowercase alphabet in reverse
 * Return: void
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
