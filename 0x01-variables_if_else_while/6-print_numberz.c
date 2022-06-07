#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints all single digit base 10 numbers starting from 0
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}

	putchar('\n');
	return (0);
}
