#include <stdio.h>
/**
 * main - Entry point
 * description - prints the alphabet in lowercase
 * Return: void
 */
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
