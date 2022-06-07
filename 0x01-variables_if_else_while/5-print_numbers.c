#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * Description: Prints all single digit base 10 numbers starting from 0
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
