#include <stdio.h>
/**
 * main - Entry point
 * description - A program that prints the alphabet in lowercase and uppercase
 *
 * Return: void
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
